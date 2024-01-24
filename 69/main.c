#include <stdio.h>
#include <stdlib.h>

void printReverse(char *s);

int main()
{
    char s[]="this is the way";

    printReverse(s);

    return 0;
}
void printReverse( char *s){

    if (*s != '\0'){
        printReverse(s+1);
        printf("%c", *s);
    }
}
