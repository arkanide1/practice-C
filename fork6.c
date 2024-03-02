#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
    int id = fork();
    if (id == 0){
        id = fork();
        if (id ==0 ){
            printf("3\n");
        }else {
            printf("2\n");
        }
    }else{
        printf("1\n");
    }

// main fils first child child child


    return 0;
}