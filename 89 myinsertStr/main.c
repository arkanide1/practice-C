#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *conc(char *s1, char *s2, int pos){
    int len1= strlen(s1), len2= strlen(s2);
    char *s = (char *)malloc(len1*len2*sizeof(char));

    int i=0,j=0,z=0;

    while (s1[i]!='\0'){
        s[j++]=s1[i++];
        if (j==pos){
            while (s2[z]!='\0'){
                s[j++]=s2[z++];
            }
        }
    }
    s[j]='\0';
    return s;
}


int main() {
    char *result ;
    char name[100]="hello my name is , what is your name ?";
    result = conc(name , "Mohamed Ouaquad",17);
    puts(result);

    return 0;
}
