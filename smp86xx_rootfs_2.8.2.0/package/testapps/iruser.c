
/* 
 * Sample IR user level program 
 */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/select.h>
#include <sys/time.h>

#include <asm/tango2/ir.h>

#define ITERATIONS	30
#define POWER_KEY	0xbc43e608

/* IR device node and file handle */
static const char *dev = "/dev/ir";
static int fno = -1;

static void usage(const char *prog_name)
{
	printf("usage: %s [-n|-manutest]\n", prog_name);
	printf("       -n: non-blocking mode\n");
	printf("       -manutest: manufacture testing mode\n");
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

/* Get the repeatation keys: only applicable for NEC remote */
int ir_get_repeatation_keys(int fno, unsigned int *num_keys, unsigned long *keys)
{
	unsigned long buf[256];
	int res;

	if (fno < 0)
		return(-1);
	res = ioctl(fno, IR_IOCGETREPEATKEYS, (unsigned long)buf);
	if (res != 0)
		return(-1);
	*num_keys = buf[0];	/* # of kets and followed bt the keys */
	memcpy(keys, &buf[1], sizeof(unsigned long) * buf[0]);
	return(0);
}

/* Set the repeatation keys: only applicable for NEC remote */
int ir_set_repeatation_keys(int fno, unsigned int num_keys, unsigned long *keys)
{
	unsigned long buf[256];
	int res;

	if (fno < 0)
		return(-1);
	buf[0] = num_keys;	/* # of kets and followed bt the keys */
	memcpy(&buf[1], keys, sizeof(unsigned long) * buf[0]);
	res = ioctl(fno, IR_IOCSETREPEATKEYS, (unsigned long)buf);
	if (res != 0)
		return(-1);
	return(0);
}

int main(int argc, char *argv[])
{
	int cnt = 0;
	int status = 0;
	int stat;
	int manutest = 0;
	unsigned flags = O_RDONLY;
	unsigned long temp;
	union {
		unsigned long l;
		unsigned char c[sizeof(unsigned long)];
	} u;

	/* Check argument */
	if (argc != 1) {
		if ((argc == 2) && (!strcmp(argv[1], "-n"))) {
			flags |= O_NONBLOCK;
		} else if ((argc == 2) && (!strcmp(argv[1], "-manutest"))) {
			flags |= O_NONBLOCK;
			manutest = 1;
		} else {
			usage(argv[0]);
		}
	} 

	install_sig_handler();

	if ((fno = open(dev, flags)) < 0) {
		printf("error opening %s\n", dev);
		return(-1);
	}

	if (manutest == 0) {
		/* Reading from IR device */
		for (cnt = 0; cnt < ITERATIONS; cnt++) {
			if (flags & O_NONBLOCK) {
				if (read(fno, &u.l, sizeof(unsigned long)) > 0)
					printf("Iter(%d): 0x%08lx\n", cnt, u.l);
				else
					printf("Iter(%d): nothing\n", cnt);
			} else {
				fd_set rfds;
				struct timeval tv;
				int ret;
		
				FD_ZERO(&rfds);
				FD_SET(fno, &rfds);
				tv.tv_sec = 5;
				tv.tv_usec = 0;

				ret = select(fno + 1, &rfds, NULL, NULL, &tv);
				if (ret) {
					if (read(fno, &u.l, sizeof(unsigned long)) > 0)
						printf("Iter(%d): 0x%08lx\n", cnt, u.l);
					else
						printf("Iter(%d): nothing\n", cnt);
				} else {
					printf("Iter(%d): timeout\n", cnt);
				}
			}
		}
	} else {
		printf("Please press <Power> on NEC type remote within "
			"%d second ...", ITERATIONS);
		fflush(stdout);
		for (cnt = 0; cnt < ITERATIONS; cnt++) {
			/* Pick up the last key pressed*/
			while ((stat = read(fno, &temp, 
					sizeof(unsigned long))) > 0) {
				if ((u.l = temp) == POWER_KEY)
					break;
			}
			if (u.l == POWER_KEY)
				break;
			sleep(1);
		}
		if (cnt >= ITERATIONS) {
			printf("\nTimeout, <Power> key not received.\n");
			status = -1;
		} else
			printf("\n<Power> key received.\n");
	}

	close(fno);
	return(status);
}

