#include <stdio.h>

int add(int a , int b){
    return a+b;
}
int sous(int a ,int b){
    return a-b;
}


int main (){
    int (*tab_ptr_to_fcts[2])(int, int) = {add, sous};

    int result1 = tab_ptr_to_fcts[0](20 , 20);
    int result2 = tab_ptr_to_fcts[1](20, 20);
    printf("%d\n", result1);
    printf("%d\n", result2);


    return 0;
}

