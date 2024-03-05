#include <stdio.h>

int main(){

	int N;
	int eq=1;
	printf("entrez la taille du tableau :");
	scanf("%d", &N);
	
	int t1[N];
	int t2[N];
	//reamplissage de t1
	for (int i = 0 ;i < N;i++){
		printf("T1[%d] :\n", i);
		scanf("%d", &t1[i]);
	}
	//reamplissage de t2
	for (int i = 0 ;i < N;i++){
		printf("T2[%d] :\n", i);
		scanf("%d", &t2[i]);
	}
	//verification degalite
	
	for (int i =0 ;i<N;i++){
		if ( t1[i] != t2[i]){
			eq =0;
			break;
		}
	}
	eq ? printf("vrai\n") : printf("faux\n");
}
