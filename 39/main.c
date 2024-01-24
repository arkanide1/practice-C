#include <stdio.h>

int main(){


	char buffer1[100];
    char buffer2[100];
    char buffer3[100];


    printf("Enter :");
    scanf("%[^\n]%*c", buffer1 );
    printf("Buffer1 : %s\n" , buffer1 );

    printf("Enter :");
    fgets(buffer2 , 100 , stdin);
    printf("Buffer2 : %s" , buffer2 );

    char c;
    int i=0;

    printf("Enter :");
    while( (c=getchar()) != '\n')
        buffer3[i++] = c;
    buffer3[i]='\0';
    printf("Buffer3 : %s\n" , buffer3 );


	return 0;
}
