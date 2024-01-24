#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[50];
    int lg,i, carre=1;


    do{
        printf("enter la chaine:");
        gets(chaine);
        lg=strlen(chaine);

    }while(lg%2 != 0);
    /*
    for (i=0;i<lg/2;i++){
        if (chaine[i] != chaine[i+lg/2]){
            carre = 0;
        }
    }
    (carre == 1)? printf("la chaine est carre\n") : printf("la chaine n'est pas carre\n");
    */



    return 0;
}
