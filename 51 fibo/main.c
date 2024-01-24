#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int wordCount(char *s, char *w){
    int i, j, cp = 0;
    int slen = strlen(s), wlen = strlen(w);
    int end = slen - wlen + 1;

    for (i = 0; i < end; i++) {
        bool wordFound = true;
        for (j = 0; j < wlen; j++) {
            if (w[j] != s[i + j]) {
                wordFound = false;
                break;
            }
        }
        if (wordFound == true) {
            cp++;
        }
    }
    return cp;
}

char removeChar(char *s, char car){
    char *p=s,*q=s;
    int lg=strlen(s);
    for(p=s;p<s+lg;p++){
        *q=*p;
        if (*q!= car){
            q++;
        }
    }
    lg=q-s;
    s[lg]='\0';
    puts(s);
}




int main()
{

    char string[100];    char car;
    gets(string);
    scanf(" %c", &car);

    removeChar(string,car);



    /*
    char word[10];

    gets(string);
    gets(word);


    int cp=wordCount(string,word);

    printf("le nombres de mots %s est : %d",word,cp);


    int N,i;

    printf("entrer le nombre des fibos :");
    scanf("%d",&N);

    int F[N];

    F[0]=0;
    F[1]=1;

    for(i=2;i<N;i++){
        F[i]=F[i-1]+F[i-2];
    }
    for(i=0;i<N;i++){
        printf("%d \t", F[i]);
    }


    char s[]="abcdeABCDE";
    int i;
    for(i=0;i<strlen(s);i++){
        if( islower(s[i])) s[i]=toupper(s[i]);
        else if (isupper(s[i])) s[i]=tolower(s[i]);

    }

    puts(s);

    */












    return 0;
}
