#include <stdio.h>

int main(){
	int t;
	int n, m, a, d;
	scanf("%d", &t);
	while(t--){	
		int count =0;
		scanf("%d %d %d %d", &n , &m , &a , &d);
		for (int i = n ;i < m ;i++){
			if (i%a != 0 || i%(a+d) != 0 || i%(a+2*d) != 0 || i%(a+3*d) != 0  || i%(a+4*d) ){
				count ++;
			}
		} 
		printf("%d\n", count);
	}
	return 0;
}
