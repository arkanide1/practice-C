#include <stdio.h>

int maxFrequencyElements(int* nums, int numsSize) {
    int frq[100]={0};
    int max =0, s=0;
   
    for (int i = 0; i < numsSize; i++) {
        frq[nums[i]]++;
    }
    
    for (int i = 0; i < 100; i++) {
        if (frq[i] > max) {
            max = frq[i];
        }
    }
    for (int i = 0;i<100;i++){    	
    	if (frq[i] == max ){
    		s += frq[i];
    	}
    }
    return s;
}



int main(){
	int T[]={81,81,81,81,81,81,81,17,28,81,81,56,81,54,81,81,81,81,81,60,81,28,81,81,81,81,81,54,81,81,81,81,100,28};
	int size = sizeof(T)/4;
	int a = maxFrequencyElements(T, size);
	printf("%d\n", a);
	return 0;
}
