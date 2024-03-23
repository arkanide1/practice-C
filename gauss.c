#include <stdio.h>

int main(){
	int N;
	printf("enter taille mat:");
	scanf("%d" , &N);
	int Mat[N][N];
	int b[N], x[N];
	printf("remplir mat:\n");
	for (int i = 0 ;i<N;i++){
		for (int j = 0 ;j<N;j++){
			printf("Mat[%d][%d] : ", i,j);
			scsanf("%d" , &Mat[i][j]);
		}
	}
	// gauss mtd
	for (int k = 1 ;k<N;k++){
		int pivot = Mat[k][k];
		if (pivot == 0){
			printf("problem occured\n");
		}else {
			for ( int i = k+1 ;i<N;i++){
				b[i]= b[i]-(a[i][k])/pivot* b[k];
				for (int j = k+1 ;j<N;j++){
					a[i][j] = (a[i][k])/pivot* a[k][j];
				}
			}
		}
	}

}
