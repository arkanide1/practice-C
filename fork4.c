#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
	
int main(){
	pid_t pid_fils;
	int status;
	int k = fork();
	if( k < 0) {
		printf("err");
	}else if(k == 0){
		printf("fils :::: ");
		printf("pid : %d pid_dad : %d\n", pid_fils, getppid());
	}else{
		printf("pere :::: ");
		printf("pid : %d pid_dad : %d\n", pid_fils, getppid());
		exit(0); 
	}
	return 0;
}

