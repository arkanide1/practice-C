#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    char data[25]= "This is the way";
    int len = strlen(data);
    int i;


    filepointer = fopen("file.txt", "w");

    if (filepointer == NULL){
        printf("unable to open the file");
        return 1;
    }

    for (i =0;i<len;i++){
        putc(data[i], filepointer);
    }

    fclose(filepointer);



    return 0;
}
