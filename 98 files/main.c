#include <stdio.h>
#include <stdlib.h>
/*
    stdio.h provides a struct for us called FILE

/*
    modes to open the file

"r" -> read from the file if the file is not present then it's going to return a null vallue
"w" -> write on the file if ther file exist it gonna delrte the file and recreate a new one
"a" -> edit or append to the file

"r+" ->  for reading and writing purpose
"w+" -> same thign
"a+ ->" for reading and writing + the content won't be lost + you can append

"rb" -> you add 'b' for binary files "ab" , "wb" ,"w+b" ...

*/

int main()
{
    FILE *Fpointer;
    // fopen return the adress of the structure
    Fpointer = fopen("file.txt", "w");

    if (Fpointer == NULL){
            printf("unable to create the file");
        return 1;
    }
    printf("all good");
    fprintf(Fpointer , "hello world\n");
    fprintf(Fpointer ,"file opened succesfully");

    fclose(Fpointer);


    return 0;
}










