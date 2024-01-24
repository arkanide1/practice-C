#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// exemple : Silent Listen =>anagram

bool isAnagram(char *w1, char *w2){
    int len1=strlen(w1);
    int len2=strlen(w2);
    int w1lc[26]={0};
    int w2lc[26]={0};

    for (int i=0;i<len1;i++){
        int lower = tolower(w1[i]);
        w1lc[  lower - 'a' ]++;
    }
    for (int i=0;i<len2;i++){
        int lower = tolower(w2[i]);
        w2lc[  lower - 'a' ]++;
    }

    for(int i=0;i<26;i++){
        if (w1lc[i]!=w2lc[i]) return false;
    }
    return true;
}


int main()
{
    char w1[]="Listen";
    char w2[]="Silent";
    if(isAnagram(w1,w2)){
        printf("is anagram");
    }else{
        printf("not anagram");
    }

    return 0;
}
