#include <stdio.h>
#include <stdlib.h>

int passThePillow(int n, int time) {
	int direction=1;
	int i=1 ;
	
	while (time-- ){
		direction +=i	;	
	 	if(direction == n || direction == 1) i*=-1;
	}

	return direction >0  ? direction : -direction ;
}



int main(){
	int n = 18 , time =38;
	//int n = 4 , time =5;
	printf("%d\n", passThePillow(n , time)); 
	return 0;
}
