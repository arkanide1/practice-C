#include <stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int t[n];
	for (int i =0;i<n;i++){
		scanf("%d", &t[i]);
	}
	for (int i =1;i<=n;i++){
		for (int j =1 ;j<=n;j++){
			if (t[j-1] == i){
				printf("%d ", j);
			}
		}
	}		
	printf("\n");

	
	return 0;
}
