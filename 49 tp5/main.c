#include <stdio.h>
#include <stdlib.h>

char menu();
char * saisir(char *ch);
void afficher(char *ch);
char * inverse(char *ch);
int mots(char *ch);

int main()
{
    char chaine[50] ;
    char choix;
    while( (choix=menu())!= '0'){
            getchar();
      switch (choix) {
          case '1' : saisir(chaine);break;
          case '2' : afficher(chaine);break;
          case '3' : inverse(chaine); break;
          case '4' : printf("\nmots : %d\n" , mots(chaine));break;
          default : printf("\ninvalide operator\n" );
      }
    }

    return 0;
}
char menu(){

    printf("1-saisir\n");
    printf("2-afficher\n");
    printf("3-inverse\n");
    printf("4-nombre des mots\n");
    printf("0-Sortir\n");
    printf("entrez un choix :");

    return getchar();
}
char * saisir(char *ch){
    printf("enter la chaine :");
    gets(ch);
    return ch;
}
void afficher(char *ch){
    printf("\n");
    puts(ch);
    printf("\n");
}
char * inverse(char *ch){
    int i,j;
    char tmp;
    for(i=0,j=strlen(ch)-1;i<j;i++,j--){
        tmp=ch[i];
        ch[i]=ch[j];
        ch[j]=tmp;
    }
    return ch;

}
int mots(char *ch){
    char *p=ch;
    int cp=0;

    while (*p != '\0'){
        if (*p != ' ' && (*(p+1) == ' ' || *(p+1)=='\0'))cp++;p++;
    }
    return cp;
}
