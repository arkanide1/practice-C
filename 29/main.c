#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    int i, palin=1 ,lg;
    gets(ch);
    lg=strlen(ch);

    for(i=0;i<=lg/2;i++){
        if (ch[i] != ch[lg-i-1] ){
            palin=0;
        }
    }
    palin== 1 ? printf("palindrome") : printf("n'est pas palindrome");


    return 0;
}
