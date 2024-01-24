#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *ch1, char *ch2){
    char *ch,i;
    int lg1=strlen(ch1) , lg2=strlen(ch2);

    ch=(char*)malloc((lg1+lg2+1)*sizeof(int));

    for(i=0;i<lg1+lg2;i++){
        if(i<lg1){
            ch[i]=ch1[i];
        }else{
            ch[i]=ch2[i-lg1];
        }
    }
        ch[lg1+lg2]='\0';
        return ch;


}

int main()
{
    char ch1[50], ch2[50], *ch;
    gets(ch1);
    gets(ch2);

    ch=concat(ch1,ch2);
    puts(ch);


    return 0;
}
