#include <stdio.h>
#include <stdlib.h>


typedef int (*ptr_type_def1)(void);// void agr of returned fct 
typedef int (*ptr_type_def2)(double , double ); // (double , double ) agrs of the returned fct 

int fonction_sans_args(void){
    return 1;
}
int fonction_avec_args(double , double ){
    return 1;
}

int (*ptr_fct1(void))(void){
    return fonction_sans_args;
}
int (*ptr_fct1(char *str))(double , double){
    printf("%s\n", str);
    return fonction_avec_args;
}

ptr_type_def1 ptr_fct3(void){
    return fonction_sans_args;
}
ptr_type_def2 ptr_fct4(char *str){
    printf("%s\n", str);
    return fonction_avec_args;
}



int main (){


    return 0;
}

