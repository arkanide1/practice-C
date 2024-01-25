#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    char name[25];
    int age;

    filepointer = fopen("file.txt", "w");

    if (filepointer == NULL){
        printf("unable to open the file");
        return 1;
    }else{

    printf("enter your name:");
    gets(name);
    printf("enter your age :");
    scanf("%d", &age);

    //fprintf(filepointer, data);


    fprintf(filepointer, "%s you are %d y.o",name,age);
    printf("data has written successfuly");


    }
    fclose(filepointer);



    return 0;
}
