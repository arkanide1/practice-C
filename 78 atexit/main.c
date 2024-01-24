#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t start , end;

void cleanup(){
    time(&end);
    double diff = difftime(end, start);
    printf("\ndiff time : %f \n", diff);
}

int main()
{
// atexit it doesnt do anything special but we can use it to output for examplehow long the program's been running
    char name[20];
    time(&start);
    printf("hello\n");
    printf("enter your name :");
    gets(name);
    atexit(cleanup);
    printf("hahaha\n");
    return 0;
}
