#include <stdio.h>
#include <stdlib.h>


/*
    syntaxe

    int rename(oldname, newname);

    --> returns 0 if success
    --> returns non 0 if an error occured while renaming
*/



int main()
{
    if (rename("name1.txt" , "file.txt")  == 0){
        printf("file renamed successfuly");
    }else{
        puts("error while renaming");
    }



    return 0;
}
