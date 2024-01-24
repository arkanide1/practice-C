#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
        int i,j, countDays;
    int index=0;
    int *answer=(int *)malloc(temperaturesSize*sizeof(int));

    for(i=0;i<temperaturesSize;i++){
        countDays=0;
        if(temperatures[i]>=30 && temperatures[i]<=100){
            for(j=i+1;j<temperaturesSize;j++){
                countDays++;
                if(temperatures[i]<temperatures[j])break;
                else if(j==temperaturesSize-1 && temperatures[i]>=temperatures[j])countDays=0;
            }
            answer[index++]=countDays;
        }
    }
    *returnSize=index;
    return answer;
}


int main()
{
    int T1[]={34,80,80,80,34,80,80,80,34,34};
    int len = sizeof(T1)/sizeof(T1[0]);
    int returnSize;

    int *res=dailyTemperatures(T1, len,&returnSize);

    for(int i=0;i<returnSize;i++){
        printf("%d \t ", res[i]);
    }


    return 0;
}
