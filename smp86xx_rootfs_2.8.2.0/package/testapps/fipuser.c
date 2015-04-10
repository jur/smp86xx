
/* 
 * Sample FIP user level program 
 */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/ioctl.h>

#include "fiplib.h"

/* Signal handler */
static void terminate(int sig_no)
{
	printf("Got signal %d, exiting ...\n", sig_no);
	fipRelease();
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

#define ITER_KEYS	10

int main(int argc, char *argv[])
{
	int i, h, m, s;
	char tt[2];
	unsigned long key_status;
	char *text = NULL;

	if ((argc != 1) && (argc != 2)) {
		printf("usage: %s [display_text]\n", argv[0]);
		return(-1);
	} else if (argc == 2)
		text = argv[1];

	if (fipInit(0 /* Non-block */, NULL /* Default device name */) != 0) {
		printf("Cannot open fip device.\n");
		return(-1);
	}

	if (text != NULL) {
		fipWriteText(text);
		goto done;
	}
		
	install_sig_handler();

	/* Read the key input */
	i = 0;
	printf("Please press any button from Front Panel (%d/%d): ", 
			i + 1, ITER_KEYS);
	fflush(stdout);
	while (1) {
		if ((key_status = fipGetKey()) != 0) {
			switch(key_status) {
				case FIP_KEY_EJECT:
					printf("EJECT pressed\n");
					break;
				case FIP_KEY_PREV:
					printf("PREV pressed\n");
					break;
				case FIP_KEY_NEXT:
					printf("NEXT pressed\n");
					break;
				case FIP_KEY_FBWD:
					printf("FAST BACKWARD pressed\n");
					break;
				case FIP_KEY_FFWD:
					printf("FAST FORWARD pressed\n");
					break;
				case FIP_KEY_PLAYPAUSE:
					printf("PLAY/PAUSE pressed\n");
					break;
				default:
					printf("Unknown key 0x%08lx\n", key_status);
					break;
			}
			i++;
			if (i >= ITER_KEYS)
				break;
			printf("Please press any button from Front Panel (%d/%d): ", 
				i + 1, ITER_KEYS);
			fflush(stdout);
		}
	} 

#ifdef CONFIG_EM86XX_FIP_REF1
	for (i = DVD_FIP_ON; i <= NTSC_FIP_ON; i++) {
		fipShowSymbol(i, 1);
		usleep(200000);
	}
	for (i = DVD_FIP_ON; i <= NTSC_FIP_ON; i++) {
		fipShowSymbol(i, 0);
		usleep(100000);
	}
	for (i = DVD_FIP_ON; i <= NTSC_FIP_ON; i++) {
		fipShowSymbol(i, 1);
	}
#endif
	
	tt[1] = '\0';
	for (i = 'a'; i <= 'z'; i++) {
		tt[0] = i;
		fipWriteText(tt);
		usleep(500000);
	}
	for (i = 'A'; i <= 'Z'; i++) {
		tt[0] = i;
		fipWriteText(tt);
		usleep(500000);
	}

	for (i = 0; i < 7200; i++) {
		h = i / 3600;
		m = (i - h * 3600) / 60;
		s = i - h * 3600 - m * 60;
		fipShowHMS(h, m, s);
		usleep(10000);
	}

done:
	fipRelease();
	return(0);
}

