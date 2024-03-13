#include <stdio.h>

typedef double (*ptr_to_fct)(double, double);


double addition(double a , double b){
    return a+b;
}
double soustraction(double a , double b){
    return a-b;
}
double multiplication(double a , double b){
    return a*b;
}
double division(double a , double b){
    if (b!=0){
        return a/b;
    }else{
        printf("div impossible\n");
        return -9999;
    }
}
void menu(ptr_to_fct ptr , int a , int b){
    printf("Result %.2f\n" ,(*ptr)(a,b) );
}

int main(){
    
    ptr_to_fct tab_of_fcts[4] = {addition, soustraction, multiplication, division};

    int n ;
    double a,b;

    do {
        printf("1 addition \n");
        printf("2 soustraction \n");
        printf("3 multiplication \n");
        printf("4 division \n");
        printf("enter l'operation :");
        scanf("%d", &n);
    }while(n>4|| n<1);
    printf("enter a et b:");
    scanf("%lf %lf", &a, &b);
    menu(tab_of_fcts[n - 1], a, b);


    return 0;

}
