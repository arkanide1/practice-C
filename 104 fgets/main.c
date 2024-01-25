#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fgets(variable , length ,filePointer);
    //instead of filePointer we can use stdin to read from terminal

    FILE *fp;
    char ch[100];

    fp = fopen("file.txt", "r");

    if (fp == NULL){
        printf("unable to open the file");
        return 1;
    }else {

        while (!feof(fp)){
            fgets(ch, sizeof(ch)/sizeof(ch[0]), fp);
            printf("%s" , ch);
        }

    }
    fclose(fp);




    return 0;
}
