#include <stdio.h>

int main(){
	int n ;
	scanf("%d", &n);
	int current = n;
	int num;
	int tmp[n+1];
	for (int i = 0; i <= n; i++) {
        tmp[i] = 0;
    }
	for (int i=0;i<n;i++){
		scanf("%d", &num);
			tmp[num]=1;
			while(tmp[current] == 1){
				printf("%d ",current--);
			}
			printf("\n");

	}
	return 0;
	
}



