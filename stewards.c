#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int t[n];
	int min = 999999999;
	int max = 0;
	for (int i =0;i<n;i++){
		scanf("%d", &t[i]);
		if (min > t[i]) min = t[i];
		if (max < t[i]) max = t[i];
	}

	int count =0;
	for (int i =0;i<n;i++){
		if (min< t[i] && t[i] < max){
			count++;
		}
	}
	printf("%d\n", count);
}
