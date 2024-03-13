#include <stdio.h>
#define N 4


int saisir(void){
    int a;
    printf("enter a number :");
    scanf("%d", &a);
    return a;
}

int somme(int a , int b){
    return a+b;
}



int main (){
    int (*ptr_to_saisir)(void);
    int (*ptr_to_somme)(int , int );
    ptr_to_saisir = saisir;
    ptr_to_somme = somme;

    int sum = (*ptr_to_somme)((*ptr_to_saisir)(), (*ptr_to_saisir)()); 
    printf("%d\n", sum);


    return 0;
}

