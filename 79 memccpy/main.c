#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char source[]="john.smith@gmail.com";
    char destination[20];

    char *pos = memccpy(destination, source , '@', 20);
    pos[0]='\0';
    for (int i =0;i<20;i++){
        printf("destination[%d] : %c\n",i,destination[i]);

    }
    printf("destination: %s", destination);

    return 0;
}
