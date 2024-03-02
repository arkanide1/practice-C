# include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int status,i = 0, pid;
    pid=fork();
    if(pid==0) {
        printf(" le fils : chez moi, i=%d \n ",i);
        i++;
        printf("\n le fils : maintenant, chez moi, i=%d \n" ,i);
    } else{
        //wait(&status);
        while(wait(&status)>=0); /*attendre la fin de chaque enfant*/
        printf(" je suis le père : Chez moi, i=%d \n ",i);
    }
    return 0;
}