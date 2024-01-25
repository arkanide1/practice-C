#include <stdio.h>
#include <stdlib.h>

/*
    syntaxe
    FILE *tmpfile();
    -creates a inary tmp file and opens in w+b mode

*/


int main()
{
    FILE *tmp ;
    char data[]= "test";
    int len = strlen(data);
    int cp = -1;
    tmp = tmpfile();

    if ( tmp != NULL){
        printf("the tmp file is created\n");
        while(++cp < len){
            fputc(data[cp], tmp);
        }

        rewind(tmp);

        while (!feof(tmp)){
            putchar(fgetc(tmp));

        }

    }else{
        puts("unable to create the tmp file");
    }


    return 0;
}
