#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
    int fd[2];
    // fd[0] read
    // fd[1] write

    if (pipe(fd) == -1){
        printf("an error occured with opening the pipe \n");
        return 1;
    } 
    int id = fork();
    if (id == -1 ){
        printf("an error occured with fork\n");
        return 4 ;
    }
    if (id == 0 ){
        close(fd[0]);
        int x;
        printf("enter a number :");
        scanf("%d", &x);
        if (write(fd[1], &x, sizeof(int))  == -1 ){
            printf("err occured writting to the file descripre 1\n");
            return 2;
        }
        close(fd[1]);
    }else {
        close(fd[1]);
        int y ;
        if (read(fd[0], &y, sizeof(int)) == -1){
            printf("err occured reading to the file descripre 0\n");
            return 3;
        }
        y = y*3;
        close(fd[0]);
        printf("got from child process %d\n", y);
    }


    return 0;
}