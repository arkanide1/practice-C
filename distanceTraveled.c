#include <stdio.h>

int distanceTraveled2(int mainTank, int additionalTank){
	int distance =0;
	int count = 0;
	while (mainTank--){
		distance ++;
		count ++;
		if (count == 5 && additionalTank >= 1){
			count = 0;
			mainTank ++;
			additionalTank--;
		}

	}
	return distance *10;
}

int main(){
	int m = 9, add = 10;
	
	printf("%d\n",distanceTraveled(m, add));

	return 0;
}
