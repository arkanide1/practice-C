#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(){
	pid_t pid_fils;
	pid_fils=fork();
	
	if(pid_fils==-1) printf("err");
	
	
	if(pid_fils==0){
		sleep(1);
		printf("pid fils=%ld, ppid=%ld \n \n",(long) getpid(),(long) getppid());
	}else{
		sleep(5);
		printf("pid pere=%ld, ppid=%ld, pidfils=%ld \n \n ",(long) getpid(),(long) getppid(), (long) pid_fils);
	}
	return 0;
}
