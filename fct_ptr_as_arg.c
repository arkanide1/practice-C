#include <stdio.h>
#include <stdlib.h>

typedef void (*ptr_to_fct)(int);


void fonction1(int n){
    printf("fonction1 , appel N %d\n", n);
}

void fonction2(int n , ptr_to_fct ptr){
    (*ptr)(n);
}


int main (){
    fonction2(2 , fonction1);
    fonction2(13 , fonction1);
    return 0;
}

