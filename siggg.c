#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	int pid;
	char choix;
	printf("saisir le numéro de processus à terminer%d\n",getpid());
	scanf("%d",&pid);
	printf("Etes-vous sûr de vouloir tuer le processus %d ? (y/n) ", pid);
	getchar();
	choix= getchar();
	if (choix == 'y')
		kill(pid, SIGTERM);
	else printf("action annulées\n");
	
	return 0;
}
