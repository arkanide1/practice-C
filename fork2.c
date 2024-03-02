#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char* argv[]){

	pid_t pid_fils;

	printf("Le fils n'est pas encore né \n");

	pid_fils=fork();
	if(pid_fils==-1) {printf("erreur"); exit (1);
	
	}else if(pid_fils==0){
		printf("je suis le fils");
		printf("mon PID=%ld", (long) getpid());
		printf(" PPID =%ld", (long) getppid());
	}else{
		printf("je suis le père: mon PID=%ld", (long) getpid());
		printf(" PID de mon fils =%ld ", (long)pid_fils);
		printf(" PPID =%ld ", (long) getppid());

	}
	printf("\n");
	return 0;

}
