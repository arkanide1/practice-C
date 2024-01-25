#include <stdio.h>
#include <stdlib.h>

/*
    syntaxe

    int ferror(FILE *filepointer);
    void clearerr(FILE *filepointer);

*/

int main()
{
    int status ;
    char data[10]= "asdfasdf";

    FILE *fp;
    fp= fopen("file.txt", "r");
    //fp = fopen("file.txt", "w");


    if (fp == NULL){
        printf("unable to open the file");
        return 1;
    }else{
        fprintf(fp,"%s", data);
        status = ferror(fp);
        printf("%d\n", status);

        clearerr(fp);
        status = ferror(fp);
        printf("%d\n", status);

        if(status == 0){
            printf("NO errors");
        }else{
            printf("read or write error has occured");
        }
    }



    return 0;
}
