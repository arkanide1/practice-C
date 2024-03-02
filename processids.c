#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int id = fork();
    int status;
    if (id == 0){
        sleep(1);
    }else {
        printf("parent ");
        printf("pid :%d , fils pid : %d  parent pid : %d \n", getpid() , id ,getppid());

        int res = wait(NULL);
        if ( res  == -1 ){
            printf("no children left\n");
        }else {
            printf("wait result : %d\n" ,res );
        }
    }
    return 0;
}