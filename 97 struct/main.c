#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[10];
    char prenom[10];
    int notes[3];
    float moy;
} Student;

void saisir(Student *s){
    int somme=0;
    printf("entez votre nom et prenom:");
    scanf("%s", s->nom);
    scanf("%s", s->prenom);
    printf("entez votre notes.\n");
    for (int i=0;i<3;i++ ){
        printf("note %d :", i+1);
        scanf("%d", &s->notes[i]);
        somme+=s->notes[i];
    }
    s->moy = (somme/3.00);
}

void printstd(Student s){

    printf("la moyenne de %s %s est : %.2f\n", s.nom , s.prenom ,s.moy );
}



int main()
{
    Student std1, std2;
    saisir(&std1);
    printstd(std1);
    saisir(&std2);
    printstd(std2);


    return 0;
}
