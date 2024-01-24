#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void printtOcc(char *s);
void printtOcc2(char *s);

int main()
{
    char s[100]="abcdefghijklmnopjklmnop";
    printtOcc(s);

    return 0;
}

void printtOcc(char *s){
    int len = strlen(s);
    char unique[len];
    int counted =0;

    for (int i = 0;i<len;i++){
        bool alreadyCounted = false;

        for (int j=i+1;j<counted;j++){
            if ( s[i] == unique[j]) alreadyCounted = true;
        }
        if (alreadyCounted) continue;
        int count = 0;
        for (int j = 0 ;j<len; j++){
            if (s[i]== s[j]){
                count++;
            }
        }
        printf("%c - %d\n", s[i], count);
        unique[counted++]= s[i];

    }

}
void printtOcc2(char *s){
    int len = strlen(s);
    int unique[len];
    int i,j,count;

    for (int i = 0;i<len;i++){
        unique[i]=-1;
        count=1;
        for (int j=i+1;j<len;j++){
            if ( s[i] == s[j]){
                unique[j]=0;
                count++;
            }
        }
        if (unique[i]!=0){
            unique[i]= count;
        }
    }
    for (i=0;i<len;i++){
        if (unique[i]!= 0){
            printf("%c - %d\n", s[i], unique[i]);
        }
    }

}
