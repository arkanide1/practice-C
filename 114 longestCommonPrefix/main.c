#include <stdio.h>
#include <stdlib.h>


char *prefixecommun(char *chaine1, char *chaine2) {
    int lg1 = strlen(chaine1), lg2 = strlen(chaine2);
    char *p, *q, *prefix;
    p = chaine1;
    q = chaine2;

    if (*p != *q) {
        return NULL;
    } else {
        prefix = (char *)malloc((lg1 < lg2 ? lg1 : lg2) + 1);

        if (prefix == NULL) {
            return NULL;
        }

        int index = 0;
        while ( *p != '\0' && *q != '\0' && *p == *q) {
            prefix[index++] = *p++;
            q++;
        };
        prefix[index] = '\0';
        return prefix;
    }
}

char *longestCommonPrefix(char **strs, int strsSize) {
    char *longest = strs[0];

    for (int i = 1; i < strsSize; i++) {
        longest = prefixecommun(longest, strs[i]);
        if (longest == NULL) {
            return "";
        }
    }
    return longest;
}

int main()
{
    char *words[] = {"",""};
    int strsSize = sizeof(words) / sizeof(words[0]);

    printf("The longest common prefix is : %s  .\n", longestCommonPrefix(words, strsSize));


    return 0;
}

