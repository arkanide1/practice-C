#include <stdio.h>
#include <stdlib.h>

/*
    syntaxe
    void rewind(file *fp);

    normally when we open a file in c using the fopen fct,
    it returns the aderesse of a structure of type file ,
    this structure contains all the details of this file:
        name , size , location , the file position indicator etc etc
        he file position indicator tells us where we are exactly in the file

        when we first open the file in "r"or "w" the file indicator will be at the beginning
        "a" mode will the at the end of the file

    fct is used to reset the file position indicator

*/


int main()
{

    FILE   *fp;
    fp= fopen("file.txt", "r") ;

    while( !feof(fp) ){
        putchar(fgetc(fp));
    }
    rewind(fp);
    puts("");
    while( !feof(fp) ){
        putchar(fgetc(fp));
    }

    return 0;
}
