#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[100], B[100] , *pa=A, *pb=B;

    gets(A);
    gets(B);

    pa=A+strlen(A);

    while(*pb!='\0'){
        *pa=*pb;
        pa++;
        pb++;
    }

    A[pa-A]='\0';
    puts(A);
    return 0;
}
