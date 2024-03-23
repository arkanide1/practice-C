#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(){
	int pid = fork();
	if (pid == 0){
		while(1){
			printf("yeeaah i am alive\n");
		}
	}else{
		sleep(1);
		printf("envoi de signal au fils :\n");
		kill(0, SIGKILL);
	}
	
	return 0;
}
