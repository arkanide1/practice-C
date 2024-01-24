#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int j;
    int m;
    int a;

}datenaise;
typedef struct {
    char nom[20];
    char prenom[20];
    datenaise date;
}Stagiaire;

int main()
{

    Stagiaire pers;

    printf("enter le nom et le prenom :");
    gets(pers.nom);
    gets(pers.prenom);
    printf("entez la date de naissance j/m/a:");
    scanf("%d %d %d", &pers.date.j
                    , &pers.date.m
                    , &pers.date.a);
    printf(" %s %s , votre date de naissance est :%d/%d/%d ", pers.nom
                                                            ,pers.prenom
                                                            ,pers.date.j
                                                            , pers.date.m
                                                            , pers.date.a);

    return 0;
}
