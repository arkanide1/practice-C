#include <stdio.h>
#include <stdlib.h>

int nbrchiffres(int x);

int main()
{
    int n;
    printf("enter un nombre :");
    scanf("%d", &n);

    printf("nombre de chiffre est : %d",nbrchiffres(n));

    return 0;
}
int nbrchiffres(int x){
    int cp=0;
    do0{
        cp++;
        x/=10;
    }while(x);
    return cp;
}
