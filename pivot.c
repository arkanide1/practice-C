#include <stdio.h>
#include <math.h>

int pivotInteger(int n) {
	int sum1, sum2;
	int x;
    for (int i = 0;i<=n;i++){
    	sum1 = sum2= 0;
    	x = i;
    	for (int j = 0 ;j<=x;j++){
    		sum1+=j;
    	}
    	for (int j = x ;j <= n;j++){
    		sum2+=j;
    	}
    	if ( sum1 == sum2 ){
    		return x;
    	}
    }
    return -1;
}

int pivotInteger(int n) {
  double pivot = sqrt(n * (n + 1) / 2);
  
 	return  (pivot != (int)pivot)? -1: pivot ; 
}


int main(){
	int n= 1;
	printf("%d\n", pivotInteger2(n));

	return 0;

}
