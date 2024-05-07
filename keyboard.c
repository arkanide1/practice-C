#include <stdio.h>
#include <string.h>


int main(){
	char qwer[]={"qwertyuiopasdfghjkl;zxcvbnm,./"};
	
	char s[101], shift;
	scanf("%c", &shift);
	getchar();
	scanf("%s", s);
	int i =0, j=0;
	if (shift == 'R'){	
		while(s[i]!='\0'){
			for (int j =0;j<30;j++){
				if (s[i] == qwer[j]){
					if (j ==0 ){
						printf("%c", qwer[29]);
						break;
					}
					printf("%c", qwer[j-1]);
					break;
				}
			}
			i++;
		}
		printf("\n");
	}else {
		while(s[i]!='\0'){
			for (int j =0;j<30;j++){
				if (s[i] == qwer[j]){
					if (j ==29 ){
						printf("%c", qwer[0]);
						break;
					}
					printf("%c", qwer[j+1]);
					break;
				}
			}
			i++;
		}
		printf("\n");
	}
	
	return 0;
}
