#include <stdio.h>
#include <stdlib.h>

int main( int argc , char *argv[] )
{
    //printf("argc : %d\n" ,argc );
    //for ( int i =0 ;i<argc;i++)
    //    printf("argv[%d]=%s\n",i+1,argv[i]);


    if ( argc != 3){
        printf("two args required!\n"); exit(-1);
    }

    int lower = atoi(argv[1]);
    int higher= atoi(argv[2]);

    for(int i=lower ;i<=higher;i++)
        printf("%d\n", i);


    return 0;
}

