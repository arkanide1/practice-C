#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int n;
	scanf("%d", &n);
	long int t[n];
	long int min , max;
	
	for (int i =0;i<n;i++){
		scanf("%ld", &t[i]);
	}

	for (int i=0;i<n;i++){
		if (i == 0){
			min = abs(t[i+1]-t[i]);
			max = abs(t[n-1]-t[0]);
			printf("%ld %ld\n", min , max);
			continue;
		}
		if (i == n-1){
			min= abs(t[n-1]-t[n-2]);
			max = abs(t[n-1]-t[0]); 
			printf("%ld %ld\n", min , max);
			continue;
		}
		min = abs(t[i]- t[i-1]) < abs(t[i+1]-t[i])? abs(t[i]- t[i-1]) : abs(t[i+1]-t[i]);
		max = abs(t[i]-t[0]) > abs(t[n-1]-t[i])? abs(t[i]-t[0]) : abs(t[n-1]-t[i]);
		printf("%ld %ld\n", min , max);
	}
	
	
	return 0;
}

