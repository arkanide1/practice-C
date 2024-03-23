#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int pid = fork();

	if (pid == 0){
		execlp("ping", "ping", "-c", "3", "google.com", NULL);
	}else{
		wait(NULL);
		printf("all good\n");
	}

	return 0;
}
