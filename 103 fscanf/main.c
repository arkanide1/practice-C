#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fscanf(filePointer , "format string" , list of address of variables)

    FILE *fp;
    char nom[10];
    char prenom[10];
    int age;

    fp = fopen("idk.txt", "r");

    if (fp == NULL){
        printf("unable to open the file");
        return 1;
    }else {
        fscanf(fp, "%s %s %d", nom,prenom, &age);
        printf("nom:%s\nprenom:%s\nage:%d\n", nom,prenom,age);
    }
    fclose(fp);




    return 0;
}
