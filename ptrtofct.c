#include <stdio.h>
#include <stdbool.h>

typedef int (*ptr_fct) (int , int );
typedef int (*operation) (int , int );
typedef bool (*freeze_ptr)(int);

int one(int n){
    return 1;
}
int add(int a , int b){
    return a+b;
}
int sub(int a , int b){
    return a-b;
}
int multi(int a , int b){
    return a*b;
}
int div (int a , int b){
    return a/b;
}

int (*select_operation())(int , int ){
    int n;
    printf("1 add op :\n");
    printf("2 sub op :\n");
    printf("3 multi op :\n");
    printf("4 div op :\n");
    printf("select op :");
    scanf("%d", &n);
    if (n == 1 ){
        return add;
    }else if ( n == 2 ){
        return sub;
    }else if ( n == 3 ){
        return multi;
    }else if ( n == 4 ){
        return div;
    }
}
bool freeze_C(int temperature){
    if (temperature <= 0){
        return true ;
    }else {
        return false;
    }
}
bool freeze_F(int temperature){
    if (temperature <= 32){
        return true ;
    }else {
        return false;
    }
}
void is_freezing(freeze_ptr freeze_check){
    int t;
    printf("enter temperature :");
    scanf("%d", &t);
    if (freeze_check(t)){
        printf("its freezing \n");
    }else {
        printf("its not freezing\n");
    }
}


int main(){
    int (*ptr)(int);
    ptr  = one;
    int result = ptr(2);
    printf("%d\n", result);


    int (*array[])(int, int) = {add, sub, multi, div};
    ptr_fct array2[] = {add, sub, multi, div};
    printf("%d\n", array[0](2,3));
    printf("%d\n", array2[2](3,3));

    operation select_operation();

    printf("answer : %d\n" , select_operation()(20 , 15));

    printf("celcius : \n");
     is_freezing(freeze_C);

    return 0;
}