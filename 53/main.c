#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int *buffer;
    int N=2;
    buffer=(int * )malloc(N*sizeof(int));
    int input=0;
    int ndata=0;

    while(true){
        if (ndata== N){
            N++;
            buffer = realloc(buffer, N*sizeof(int));
        }
        printf("enter -1 to quit :");
        scanf("%d" , &input);
        if (input == -1){break;}
        else {buffer[ndata++]=input;}
    }
    for(int i =0;i<N-1;i++){
        printf("buffer[%d] : %d\n",i,buffer[i]);
    }

    return 0;
}
