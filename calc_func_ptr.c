#include <stdio.h>

typedef int (*FonctionPtr)(int ,int );
int addition(int a , int b){ return a+b ;}
int soustraction(int a , int b){ return a-b ;}
int multiplication(int a , int b){ return a*b ;}
int division(int a , int b){ return a/b ;}

void menu(FonctionPtr arr[], int k){
	int n,a,b, result ;
	do {
		printf("enter a: ");
		scanf("%d", &a);
		printf("enter b: ");
		scanf("%d", &b);
		printf("\n************************\n");
		printf("1-addition\n");
		printf("1-soustraction\n");
		printf("1-multiplication\n");
		printf("1-division\n");
		printf("enter the operator (0 to exit) : ");
		scanf("%d", &n);
		printf("\n************************\n");
		if (n == 0)break;
		printf("\t\t");
		switch (n) {
			case 1:
			{	
				result = arr[0](a,b);
				printf("%d + %d = %d\n",a,b, result);
			}break;
			case 2:
			{	
				result = arr[1](a,b);
				printf("%d - %d = %d\n",a,b, result);
			}break;
			case 3:
			{	
				result = arr[2](a,b);
				printf("%d * %d = %d\n",a,b, result);
			}break;
			case 4:
			{	
				result = arr[3](a,b);
				printf("%d / %d = %d\n",a,b, result);
			}break;
			default:
			{	
				printf("invalid operator\n");
			}break;
		}
	}while(1);
}


int main(){	
	FonctionPtr array_ptr[] = {addition,soustraction,multiplication,division};
	menu(array_ptr, 4);

	return 0;
}
