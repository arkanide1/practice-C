#include <stdio.h>
#include <stdlib.h>


int absDiff(int a, int b) {
    if (a > b) {
        return a - b;
    }
    return b - a;
}

int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (numsSize == 1) {
        *returnSize = 1;
        result[0] = 0;
        return result;
    }
    int* Right = (int*)malloc(numsSize * sizeof(int));
    int* Left = (int*)malloc(numsSize * sizeof(int));
    int i;

    Right[numsSize - 1] = 0;
    for (i = numsSize - 1; i > 0; i--) {
        Right[i - 1] = nums[i] + Right[i];
    }

    Left[0] = 0;
    for (i = 0; i < numsSize - 1; i++) {
        Left[i + 1] = nums[i] + Left[i];
    }

    for (i = 0; i < numsSize; i++) {
        result[i] = absDiff(Left[i], Right[i]);
    }

    *returnSize = numsSize;
    free(Right);
    free(Left);
    return result;
}


int main(){
	int T[]= {1};
	int len = sizeof(T)/sizeof(T[0]);
	int returnSize;
	int *res = leftRightDifference(T, len , &returnSize);
	for (int i = 0 ;i<returnSize;i++){
		printf("%d\n" , res[i]);
	}
	free(res);
	/*
	*/
	return 0;
}
