#include <stdio.h>
#include <stdlib.h>

char *supprimer(char *ch ,char c);
int main()
{
    char ch1[100], *ch2;
    char car;
    printf("entez une chaine de charactere :");
    gets(ch1);
    printf("entrez un caracter a supprimer :");
    scanf("%c", &car);

    ch2=supprimer(ch1, car);
    puts(ch2);

    return 0;
}
char *supprimer(char *ch, char c){
    int i,j, lg=strlen(ch);

    for(i=0;i<lg;){
        if (ch[i] == c ){
            for(j=i;j<lg;j++){
                ch[j]=ch[j+1];
            }
            lg--;
        }else{i++;}
    }


    return ch;
}
