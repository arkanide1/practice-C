#include <stdio.h>
#define Nmax 10 

int main(){

	int N;
	do {
		printf( "entrez la taille du tableau :");
		scanf("%d" , &N);
	}while ( N<0 || N > 10);
	int T[N];

	int *p1 , *p2 ;
	int aide;
	
	for (p1 = T;p1 < T+N;p1++){
		printf("T[%ld] : ", p1-T);
		scanf("%d", p1);
	}

	for ( p1 = T , p2 = T +N-1 ;p1 <= p2;p1++, p2--){
		aide = *p1 ;
		*p1 = *p2;
		*p2 = aide ;
	}
	for (p1 = T;p1 < T+N;p1++){
		printf("T[%ld] = %d\n", p1-T , *p1 );
	}

	return 0;
}
