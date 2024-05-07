#include <stdio.h>
#include <string.h>
#define N 600

void reverse(char *s){
	int len = strlen(s);
	for (int i =0;i<=len/2;i++){
		char tmp =s[i];
		s[i]=s[len -i-1];
		s[len-i-1]=tmp;
	}
}	

int main(){
	char x[N];
	char y[N];
	int res[N];
	for (int i =0;i<N;i++){
		res[i]=0;
	}
	scanf("%s", x);
	scanf("%s", y);
	reverse(x);
	reverse(y);
	
	while(x != '\0' || y != '\0'){
		for (int i = 0;i<strlen(x);i++){
			for (int j = 0 ;j<strlen(y);j++){
				res[i+j]= +=(x[i]- '0')*(y[j]-'0');
			}
		}
		for (int i =0;i<strlen(res);i++){
		
		}
	}

	return 0;
}
