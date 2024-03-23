#include <stdio.h>

void sort(int *T, int n) {
    for (int i = 0; i < n - 1; i++) {
        int posmin = i;
        for (int j = i + 1; j < n; j++) {
            if (T[posmin] > T[j]) {
                posmin = j;
            }
        }
        if (i != posmin) {
            int tmp = T[posmin];
            T[posmin] = T[i];
            T[i] = tmp;
        }
    }
}

int largestPerimeter(int* nums, int numsSize) {
    sort(nums, numsSize);
    for (int i = numsSize - 1; i >= 2; i--) {
        if (nums[i] < nums[i - 1] + nums[i - 2]) {
            return nums[i] + nums[i - 1] + nums[i - 2];
        }
    }
    return 0;
}




int main(){
	int T[]={1,2,1,10};
	int N = sizeof(T)/sizeof(T[0]);
	printf("%d\n", largestPerimeter(T,N));
	
	return 0;
}
