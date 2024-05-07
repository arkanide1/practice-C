#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	
	if (pow(sqrt(n), 2) == n){
		puts("yes");
	}else{
		puts("no");
	}
	return 0;
}

