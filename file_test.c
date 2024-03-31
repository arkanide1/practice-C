#include <stdio.h>
#include <stdlib.h>

typedef struct Etudiant{
	char nom[50];
	char prenom[50];
	int age;
}Etudiant;

void remplir(Etudiant *e, int n){
	for (int i = 0;i<n;i++){
		printf("nom: ");
		scanf("%s", e[i].nom);
		printf("prenom: ");
		scanf("%s", e[i].prenom);
		printf("age: ");
		scanf("%d", &e[i].age);
	}
}

void afficher(Etudiant *e, int n){
	for (int i = 0;i<n;i++){
		printf("nom: %s " , e[i].nom);
		printf("prenom: %s ", e[i].prenom);
		printf("age: %d\n",e[i].age );
		
	}
}

void save(Etudiant *e, int n , char *s){
	FILE *file = fopen(s , "w");
	if (file != NULL){
		for (int i = 0 ;i<n; i++){
			fprintf(file , "%s %s %d\n", e[i].nom ,e[i].prenom , e[i].age  );
		}
		fclose(file);
	}else {
		printf("cant open file\n");
	}
}

int main(){
	Etudiant et[2];
	remplir(et , 2);
	afficher(et , 2);
	save(et , 2 , "./files/etudiant.txt");
	return 0;
}





