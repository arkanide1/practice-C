#include <stdio.h>
#include <stdlib.h>

int main(){
	int **A;
	int L,C;
	int **P1, *P2;
	printf("entrez L puis C");
	scanf("%d%d", &L, &C);
	A = (int **)malloc ( L*sizeof(*A));
	
	for ( int i= 0;i<L;i++){
		A[i]= (int *)malloc (C*sizeof(**A));
	}
	//remplissage
	for (P1 = A ;P1 < A+L;P1++){
		for ( P2 = *P1; P2 < *P1+C ;P2++){
			printf("A[%ld][%ld]:", P1-A, P2 -*P1);
			scanf("%d", P2);
		}
	}
	//affichage
	for(int i=0;i<L;i++){
		for (int j =0 ;j<C;j++){
			printf("A[%d][%d] : %d\n",i,j,A[i][j]);
		}	
	}
	// free memo 
	for (int i = C-1 ;i>=0;i--){
		free(A[i]);
	}
	free(A);
	
	
	
	return 0;
}
