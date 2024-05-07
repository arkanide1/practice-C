#include <stdio.h>

void sort(int t[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int posmin = i;
        for (int j = i + 1; j < n; j++) {
            if (t[posmin] > t[j]) { 
                posmin = j;
            }
        }
        if (posmin != i) {
            int tmp = t[posmin];
            t[posmin] = t[i];
            t[i] = tmp;
        }
    }
}


int numofcoins(int t[], int n){
	int totalsum =0;
	int rightsum = 0;
	int i;
	int count =0;
	for (i=0;i<n;i++){
		totalsum+=t[i];
	}
	for (i =n-1;i>=0;i--){
		totalsum-=t[i];
		rightsum+=t[i];
		count++;
		if (rightsum > totalsum)break;
	}
	return count;
}

int main(){
	int n;
	scanf("%d", &n);
	int t[n];
	for(int i =0;i<n;i++){
		scanf("%d", &t[i]);
	}
	sort(t,n);
	printf("%d\n",numofcoins(t,n) );
	return 0;
}
