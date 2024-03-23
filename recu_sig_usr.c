#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void sig_usr(int sig){
	if(sig == SIGUSR1)
		printf("SIGUSR1 reçu\n");
	else if(sig == SIGUSR2)
		printf("SIGUSR2 reçu\n");
	else
		printf("reçu signal numero: %d\n",sig);
	return;
}

int main (void ){
	printf("pid=%d \n",getpid());
	
	if(signal(SIGUSR1,sig_usr) == SIG_ERR){
		perror("installation handler SIGUSR1");
		exit(1);
	}
	if(signal(SIGUSR2,sig_usr) == SIG_ERR) {
		perror ("installation handler SIGUSR2");
		exit(1);
	}
	if(signal(SIGINT,sig_usr) == SIG_ERR) {
		perror ("installation handler SIGUSR2");
		exit(1);
	}
	for(; ; );
}
