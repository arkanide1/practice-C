#include <stdio.h>

int absolu(int k){
	return (k <= 0) ? -k:k;
}


int main(){
	int i, j , x;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
        	scanf("%d", &x);
            if (x == 1) {
            	printf("%d\n", absolu(i-3 ) +absolu(j-3));
                break; 
            }
        }
    }



	
	return 0;
}
