#include <stdio.h>
#include <stdlib.h>

int main(){
	int step , mod;
	int r1, r2,i; 	
	scanf("%d %d", &step , &mod);
	r1 = r2 = step%mod;
	for (i = 1;i<=mod;i++){
		r2 = (r2+step)%mod;
		if (r2 == r1){
			break;
		}
	}
	printf("%d\n", i);
	if (i == mod ){
		printf("Good Choice\n");
	}else{
		printf("Bad Choice\n");
	}
	return 0;
}
