
/* 
 * Sample smartcard user level program 
 */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/select.h>
#include <sys/time.h>

#include <asm/tango2/scard.h>

/* smart card device node and file handle */
static const char *dev = "/dev/scard";
static int fno = -1;

static void usage(const char *prog_name)
{
	printf("usage: %s [-n]\n", prog_name);
	printf("       -n: non-blocking mode\n");
	exit(-1);
}

/* Signal handler */
static void terminate(int sig_no)
{
	printf("Got signal %d, exiting ...\n", sig_no);
	if (fno >= 0)
		close(fno);
	exit(1); 
}

static void install_sig_handler(void)
{
	signal(SIGBUS, terminate);
	signal(SIGFPE, terminate);
	signal(SIGHUP, terminate);
	signal(SIGILL, terminate);
	signal(SIGINT, terminate);
	signal(SIGIOT, terminate);
	signal(SIGPIPE, terminate);
	signal(SIGQUIT, terminate);
	signal(SIGSEGV, terminate);
	signal(SIGSYS, terminate);
	signal(SIGTERM, terminate);
	signal(SIGTRAP, terminate);
	signal(SIGUSR1, terminate);
	signal(SIGUSR2, terminate);
}

int main(int argc, char *argv[])
{
	int status = -1;
	int i;
	int ret;
	unsigned flags = O_RDWR;
	unsigned char res[256];
	unsigned char tstr[] = { 0x21, 0x00, 0x07, 0xf3, 0x68, 0xe7, 0xa7, 0x8b, 0xf5, 0xe9, 0x6a }; /* Specific string for Ping-Pong card: should return 0x12 0x0 0x7 0xf3 0x68 0xe7 0xa7 0x8b 0xf5 0xe9 0x59 */

	/* Check argument */
	if (argc != 1) {
		if ((argc == 2) && (!strcmp(argv[1], "-n"))) {
			flags |= O_NONBLOCK;
		} else 
			usage(argv[0]);
	} 

	install_sig_handler();

	if ((fno = open(dev, flags)) < 0) {
		printf("error opening %s\n", dev);
		goto out;
	} else if ((ret = write(fno, tstr, sizeof(tstr))) != sizeof(tstr)) {
		printf("write failed\n");
		goto out;
	} else {
		if ((flags & O_NONBLOCK) != 0) {
			usleep(1);
			printf("Reading ...\n");
			ret = read(fno, res, 256);
			if (ret < 0)
				printf("Error on non-block read\n");
			else {
				printf("*** ");
				for (i = 0; i < ret; i++)
					printf("0x%x ", res[i]);
				printf("***\n");
				status = 0;
			}
		} else {
			usleep(1);
			printf("Read blocking ...\n");
			ret = read(fno, res, 256);
			if (ret < 0)
				printf("Error on block read\n");
			else {
				printf("*** ");
				for (i = 0; i < ret; i++)
					printf("0x%x ", res[i]);
				printf("***\n");
				status = 0;
			}
		}
	}

	/* TEST WARMRESET */
	ret = ioctl(fno, SCARD_IOC_WARMRESET, 0);
	sleep(1);

	/* TEST CLOCK_STOP/CLOCK_START */
	if ((ret = ioctl(fno, SCARD_IOC_CLOCKSTOP, 0)) == 0) {
		sleep(3);
		ret = ioctl(fno, SCARD_IOC_CLOCKSTART, 0);
		sleep(3);
	}
	printf("\n");

out:
	if (fno >= 0)
		close(fno);
	return(status);
}

