#include <stdio.h>
#include <stdlib.h>

void bissextile(int x);
int main()
{
    int annee;
    printf("enter une annee :");
    scanf("%d" , &annee);

    bissextile(annee);
    return 0;
}
void bissextile(int x){
    if ((x%100!=0 && x%4==0)|| x%400==0){
        printf("bissextille");
    }else{
        printf("n'est pas bissextille");
    }
}
