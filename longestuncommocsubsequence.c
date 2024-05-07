#include <stdio.h>
#include <string.h>

int longestuncommocsubsequence(char *s1,char *s2 ){
	if (strcmp(s1, s2) == 0){
		return -1;
	}
	return (strlen(s2)> strlen(s1))? strlen(s2): strlen(s1);
}

int main(){
	char s1[100001];
	char s2[100001];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%d\n",longestuncommocsubsequence(s1,s2) );
	return 0;
	
}
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacccccccccccccccccccccccccccccccccccccccccccccccccc
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaadddddddddddddddddddddddddddddddddddddddddddddddddd



