#include <stdio.h>
#include <string.h>

char *panagram(char *s, int n){
	if (n < 26){
		return "NO";
	}
	int frq[26];
	for (int i =0;i<26;i++){
		frq[i]=0;
	}
	for (int i = 0; i < n; i++) {
        if ('a' <= s[i] && s[i] <= 'z') { 
            frq[s[i] - 'a'] = 1; 
        } else if ('A' <= s[i] && s[i] <= 'Z') {
            frq[s[i] - 'A'] = 1; 
        }
    }
	for (int i = 0;i<26;i++){
		if (frq[i] == 0){
			return "NO";
		}
	}
	return "YES";
}


int main(){
	int n;
	scanf("%d", &n);
	char s[n];
	scanf("%s",s);
	char *res = panagram(s,n);
	printf("%s\n", res);
}
