#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include<stdlib.h>


int main(int argc, char *argv[] ){
	//signal(SIGINT,SIG_IGN);
	if (signal(SIGINT , SIG_IGN) == SIG_ERR) {
		/* CTRL C */
		perror("SIGINT");
	}
	if (signal(SIGTERM, SIG_IGN) == SIG_ERR){
	/* KILL -TERM pid */
	perror("SIGTERM");
	}
	//suite
	for(; ; ) {
		printf("—boucle inf --\n");
	}
	
	return 0;
}



