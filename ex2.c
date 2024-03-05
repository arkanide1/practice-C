#include <stdio.h>
#define Nmax 10 

int main(){

	int N;
	int T[Nmax];
	do {
		printf("entrez la taille du tableau :");
		scanf("%d", &N);
	}while(N<0 || N > 10);
	
	//reamplissage de T
	for (int i = 0 ;i < N;i++){
		printf("T[%d] :", i);
		scanf("%d", &T[i]);
	}
	
	int *p1 ,*p2 , *pos ; 

	for (p1 = T; p1 < T + N; p1++) {
		pos = p1;
		for (p2 = p1 + 1; p2 < T + N; p2++) {
		    if (*pos > *p2) {
		        pos = p2;
		    }
		}
		if (pos != p1) {
		    int tmp = *pos;
		    *pos = *p1;
		    *p1 = tmp;
		}
	}


	for (int i = 0 ;i < N;i++){
		printf("T[%d] : %d\n", i, T[i]);
	}
	/*
	*/

	return 0;
}
