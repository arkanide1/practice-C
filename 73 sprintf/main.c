#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char string[100];

    sprintf(string , "hello %d %f", 10 , 10.5);
    printf(string);
    printf("\n");
    // we use sprintf when we wanna use a string that producced multiple times
    int len = strlen(string);

    for (int i = 0 ;i< len;i++){
        printf ("s[%d] : %c\n",i, string[i]);
    }

    return 0;
}
