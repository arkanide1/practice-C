#include <stdio.h>
#include <unistd.h>

int main(){
    int pid ;
    fork();
    fork();
    printf("pid : %d\n",  getpid());
    return 0;
}
