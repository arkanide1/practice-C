#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    //fgetc
    char ch;

    fp = fopen("file.txt", "r");

    if (fp == NULL){
        return 1;
    }else {
        while(! feof(fp)){ // feof to check wether we are at the end of the file
            ch = fgetc(fp);
            printf("%c", ch);

        }
    }
    fclose(fp);



    getch();



    return 0;
}
