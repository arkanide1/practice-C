#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// exercice cree un tab qui rempli lui trie meme d'une maniere alea
int main (){
	int T[10];
	int i , j;
	int mod = 10;
	srand(time(NULL));
	T[0]=rand()%mod;
	printf("%d\n", T[0]);
	for (i = 1;i<10;i++){
		do {
			T[i]= rand()%mod;
		}while ( T[i] < T[i-1]);
		mod++;
		printf("%d\n", T[i]);
	}
	
	
	return 0;
}
