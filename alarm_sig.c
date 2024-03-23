#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include<stdlib.h>
#include <string.h>

void handler(int sig)
{
	char s[]= "Erreur temps depasse";
	int i=1;
	int count = 14;
	while(1){
	
		if (count == strlen(s) || count == 1){
			i*=-1;
		}
		count = count +i;
		
		printf("%s\n", s+count);
		sleep(0.2);
	
	}
	exit(0);
}

int main(){
	char buff[31];
	signal(SIGALRM,handler);
	alarm(5);
	printf(" saisir une chaine : \n");
	fgets(buff,30,stdin);
	alarm(0);
	printf(" Fin: \n");
	return 0;
}
