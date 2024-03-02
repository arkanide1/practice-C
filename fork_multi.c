#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main(){
    int id1 = fork();
    int id2 = fork();
    int status;
    if (id1 == 0 ){
        if ( id2 ==0 ){
            printf("first child child\n");
        }else{
            printf("main first child\n");
        }
    }else {
        if ( id2 == 0 ){
            printf("main second child\n");
        }else{
            while(wait(&status) != -1 || errno != ECHILD){
                printf("waited for the child to finish\n");
            }
            printf("main prosess \n");
        }
    }
    return 0;
}
/*
visualization

main { id1 = x , id2 = z}
x --> main first child {id1 = 0 , id2 = y}
z --> main second child {id1 = x , id2 = 0 }
y --> first child child {id1 = 0 , id 2 = 0}

*/