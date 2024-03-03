#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    int p1[2];
    
    if ( pipe(p1) == -1){return 1;}

    int pid = fork();
    if (pid == -1) { return 2;}

    if (pid ==0){
        //child process
        int x;
        if (read(p1[0] , &x , sizeof(int)) == -1){ return 3;}
        printf("received %d\n", x);
        x *=4;
        if (write(p1[1], &x , sizeof(int)) == -1 ) {return 4;}
        printf("wrote %d\n", x);
    }else {
        // parent process 
        srand(time(NULL));
        int y = rand()%10;

        if (write(p1[1], &y , sizeof(int)) ==-1 ){ return 5;}
        printf("wrote %d \n" , y);
        if (read(p1[0], &y , sizeof(int )) == -1 ){ return 6;}
        printf("result is : %d\n", y);
    }
    close(p1[0]);
    close(p1[1]);

    return 0;
}