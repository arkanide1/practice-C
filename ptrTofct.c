#include <stdio.h>
#define N 4


void fct1(void){
    printf("hello\n");
}
void fct2(int n, char *str  , float a){
    printf("blabla %d %s %.2f\n", n, str,a);
}
int fct3(void){
    int i = 100;
    return i;
}
int fct4(double a , int b){
    return a+b;
}
char *fct5(char *chaine , int taille){
    return chaine;
}



int main (){
    void (*ptr_sur_fct1)(void);
    void (*ptr_sur_fct2)(int , char * , float);
    int (*ptr_sur_fct3)(void);
    int (*ptr_sur_fct4)(double , int );
    char *(*ptr_sur_fct5)(char * , int );



    ptr_sur_fct1 = fct1;
    ptr_sur_fct2 = fct2;
    ptr_sur_fct3 = fct3;
    ptr_sur_fct4 = fct4;
    ptr_sur_fct5 = fct5;
    printf("%p\n", ptr_sur_fct1);
    printf("%p\n", ptr_sur_fct2);
    printf("%p\n", ptr_sur_fct3);
    printf("%p\n", ptr_sur_fct4);
    printf("%p\n", ptr_sur_fct5);

    (*ptr_sur_fct1)();
    (*ptr_sur_fct2)(3, "blabla", 1.2);
    printf("%d\n",(*ptr_sur_fct3)());
    printf("somme : %d\n",(*ptr_sur_fct4)(1.2, 1));
    printf("%s\n",(*ptr_sur_fct5)("arkanide" , 100) );

    return 0;
}

