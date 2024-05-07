#include <stdio.h>

int main(){
	int n,m ,c ;
	int Nboards = 0;
	do{
		scanf("%d %d %d", &n , &m , &c);
	 	printf("%d\n", 	( (n-7)*(m-7) + c )/2 );
		
	}while ( n != 0 || m != 0 || c != 0);
	return 0;
}

