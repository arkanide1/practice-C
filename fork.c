#include<unistd.h>
#include<stdio.h>

int main(){
	int k,t;
	t=20;
	printf("t=%i\n",t);
	
	k=fork();

	printf("k=%i\n",k);
	t++;
	printf("t+1=%i\n",t);
	printf("mon PID=%ld \n", (long) getpid());
	printf(" PPID =%ld ", (long) getppid());
	printf("\n\n\n");
	return 0;
}
