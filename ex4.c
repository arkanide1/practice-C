#include <stdio.h>

int nbre_occurences( int T[], int N, int elt){
	int occ= 0;
	for ( int i = 0;i<N;i++){
		if (T[i] == elt){
			occ ++;
		}
	}
	return occ;
	
}

int nbre_occ_rec(int T[], int N, int elt){
	if (N == 0){
		return 0;
	}else {
  		return (T[N-1] ==elt) ?1+ nbre_occ_rec(T, N-1,elt) :nbre_occ_rec(T, N-1,elt);
	}

}

int main(){
	int N;
	printf( "enter la taille :");
	scanf("%d", &N);
	int T[N];
	//remplissage
	for (int i=0;i < N;i++){
		printf("T[%d] :", i);
		scanf("%d", &T[i]);
	}
	// elment 
	int elm;
	printf( "entrez l'element:");
	scanf("%d", &elm);
	printf( "le nbr d'occ est %d ", nbre_occ_rec(T, N , elm));
	return 0;
}
