#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>




bool isAnagram(char* s, char* t) {



    int lens = strlen(s);
    int lent = strlen(t);
    int countS[256] = {0};
    int countT[256] = {0};

    if (lens != lent) {
        return false;
    }

    for (int i = 0; i < lens; i++) {
        countS[s[i]]  ++;
        countT[t[i]]  ++;
    }

    for (int i = 0; i < 256; i++) {
        if (countS[i] != countT[i]) {
            return false;
        }
    }

    return true;
}


int main()
{
    char s[] = "";
    char t[] = "";

    if (isAnagram(s, t)) {
        printf("'%s' and '%s' are anagrams.\n", s, t);
    } else {
        printf("'%s' and '%s' are not anagrams.\n", s, t);
    }
    char a='a';

    printf("%d", a);
    char c[]="abcdefghijklmnoprst"

    return 0;
}
