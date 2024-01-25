#include <stdio.h>
#include <stdlib.h>

/*
    syntaxe of the remove fct

    int remove(file_name);

    returns 0 if success
    returns nonzero if there's an error
*/



int main()
{
    int  status = remove("rep/file.txt");
    if(status == 0){
        printf("you removed the file");
    }else {
        printf("there's a error removing the file");
    }


    return 0;
}
