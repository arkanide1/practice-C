#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    char data[25];
    int len = strlen(data);
    int i;


    filepointer = fopen("file.txt", "w");

    if (filepointer == NULL){
        printf("unable to open the file");
        return 1;
    }else{

    printf("enter your data:");
    gets(data);
    fputs(data ,filepointer);
    printf("data has written successfuly");


    }
    fclose(filepointer);



    return 0;
}
