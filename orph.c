#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include <stdlib.h>
int main(){
    pid_t pid_fils;
    pid_fils=fork();
    if(pid_fils==-1) printf("err");
    if(pid_fils==0){
        printf(" pid fils=%ld, ppid=%ld \n \n",(long) getpid(),(long) getppid());//1
        sleep (10);
        printf(" pid fils=%ld, ppid après la mort du pere =%ld \n \n",(long) getpid(),(long) getppid());//3
    }else{
        sleep(1);
        printf("pid pere=%ld, ppid=%ld, pidfils=%ld \n \n ",(long) getpid(),(long) getppid(), (long) pid_fils);//2
    }
    return 0;
}