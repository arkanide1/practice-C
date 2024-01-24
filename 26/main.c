#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    int i, lg=0;

    gets(ch);
    for(i=0;ch[i] != '\0';i++){
        lg++;
    }

    printf("la longuer est : %d " , lg);

    return 0;
}
