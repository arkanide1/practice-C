#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
	int k1, k2, status ;
	int fd1[2] , fd2[2];
	pipe(fd1);
	pipe(fd2);
	
	k1 = fork();
	if (k1 == 0){
		k2 = fork();
		if (k2 == 0){
			close(fd2[0]);
			close(fd2[1]);

			close(fd1[0]);
			dup2(fd1[1], STDOUT_FILENO);
			close(fd1[1]);
			execlp("cat" ,"cat", "file", NULL);
		}else{
			close(fd1[1]);
			dup2(fd1[0],STDIN_FILENO);
			close(fd1[0]);
			
			close(fd2[0]);
			dup2(fd2[1], STDOUT_FILENO);
			close(fd2[1]);
			execlp("grep","grep", "^h", NULL );
		}
	}else{
		close(fd1[0]);
		close(fd1[1]);

		close(fd2[1]);
		dup2(fd2[0],STDIN_FILENO);
		close(fd2[0]);
		execlp("wc","wc" , "-l" , NULL );
	}
	
	return 0;
}

