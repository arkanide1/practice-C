#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc , char *argv[]){
    int arr[] ={1,2,3,4,2,1};
    int start , end;
    int status ;
    int arrSize = sizeof(arr) / sizeof(int);
    int fd[2];
    if (pipe(fd) == -1){
        return 1;
    }
    int id = fork();
    if (id == -1){
        return 2 ;
    }
    if ( id == 0){
        start = 0;
        end =arrSize/2; // cuz we have 6 elms in the array

    }else {
        wait(&status);
        start = arrSize/2;
        end = arrSize;
    }

    int sum=0;
    int i ;
    for( i = start;i<end ;i++){
        sum+=arr[i];
    }
    printf("sum : %d \n", sum);

    if (id == 0 ){
        close(fd[0]);
        if (write(fd[1],&sum,sizeof(sum)) == -1 ){
            return 3;
        }
        close(fd[1]);
    }else{
        wait(&status);
        int sumFromChild;
        close(fd[1]);
        if (read(fd[0], &sumFromChild , sizeof(sumFromChild)) ==-1){
            return 4;
        }
        close(fd[0]);
        int totalSum = sum + sumFromChild;
        printf("total sum is : %d \n" , totalSum);
    }

    return 0;
}