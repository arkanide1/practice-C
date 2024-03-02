#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>


int main(int argc , char *argv[]){
    int arr[5];
    srand(time(NULL));
    int i ;
    for (i=0;i<5;i++){
        arr[i] = rand()%10;
    }
    
    int fd = open("sum" , O_WRONLY);
    if (fd == -1){
        return 1;
    }
    for (i = 0 ;i<5;i++){
        if (write(fd ,&arr[i] , sizeof(int)) == -1){
            return 2;
        }
        printf("wrote %d\n", arr[i]);
    }
    close(fd);
    int sum;
    int fd2 = open("sum", O_RDONLY);
    if (fd2 == -1 ){
        return 3;
    }
    if (read (fd , &sum , sizeof(int )) == -1){
        return 4;
    }
    printf("received %d \n", sum);
    close(fd2);

    return 0;
}