#include <stdio.h>
#include <stdlib.h>

// binaire to decimal

int convert(char *string);

int main()
{
    char s[10];
    int D;
    printf("enter a binary number : ");
    gets(s);
    D=convert(s);
    printf("decimal value is : %d", D);

    return 0;
}

int convert(char *string){
 int slen =strlen(string);
 int total=0;
 int decval=1;

 for(int i=(slen-1);i>=0;i--){
        if (string[i]=='1') total+=decval;
        decval*=2;
 }
 return total;

}
