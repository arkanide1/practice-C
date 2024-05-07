#include <stdio.h>
#include <stdlib.h>

void sort(int t[], int n){
	for (int i = 0;i<n-1;i++){
		int posmin = i;
		for (int j = i+1 ;j < n;j++){
			if (t[posmin]> t[j]){
				posmin = j;
			}	
		}
		if (posmin != i){
			int tmp = t[posmin];
			t[posmin]= t[i];
			t[i]=tmp;
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int t[n];
	for (int i =0;i<n;i++){
		scanf("%d", &t[i] );
	}
	sort(t , n);
	for (int i =0;i<n;i++){
		printf("%d ",t[i] );
	}
	printf("\n");
	return 0;
}
