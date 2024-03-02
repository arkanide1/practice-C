#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>

int main(int argc , char *argv[]){
    int id = fork();
    int n;
    int status;
    if (id == 0){
        n=1;
    }else{
        n=6;
        wait(&status);
    }
    for (int i = n;i<n+5;i++){
        printf("%d " , i);
    }
    if (id != 0){
        printf("\n");
    }

    return 0;

}