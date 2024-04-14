#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100

typedef struct tree{
	int data;
	struct tree *t_gauche , *t_droit;
}tree;

tree *creerFeuille(int val){
	tree *newleaf = (tree*)malloc(sizeof(tree));
	if (newleaf == NULL){
		fprintf(stderr, "impossible de creer un feuille\n");
		exit(EXIT_FAILURE);
	}
	newleaf->data= val;
	newleaf->t_droit = NULL;
	newleaf->t_gauche = NULL;
	return newleaf;
}
tree *construireArbre(tree *arbre_g , tree *arbre_d , int value ){
	tree *tr = creerFeuille(value);
	tr->t_gauche = arbre_g;
	tr->t_droit = arbre_d;
	return tr;
}
void clean_tree(tree *tr){
	if (tr == NULL){
		return;
	}
	printf("suppresion de %d\n", tr->data);
	clean_tree(tr->t_gauche);	
	clean_tree(tr->t_droit);
	free(tr);
}
void parcours_prefixe(tree *tr){
	if (tr == NULL){
		printf("%d\n", 0);
	}else{
		printf("%d\n", tr->data);
	}
	if (tr->t_gauche!= NULL){
		parcours_prefixe(tr->t_gauche);
	}
	if (tr->t_droit != NULL){
		parcours_prefixe(tr->t_droit);
	}
}
int countNodes(tree *tr){
	if (tr == NULL){
		return 0;
	}
	return 1+ countNodes(tr->t_gauche)+ countNodes(tr->t_droit);
}
int profondeur(tree *tr){
	if (tr == NULL){
		return 0;
	}
	int profondeur_g = 1+profondeur(tr->t_gauche);
	int profondeur_d = 1+profondeur(tr->t_droit);
	return 1+ (profondeur_d > profondeur_g )? profondeur_d : profondeur_g; 
}

int main(){
	tree *ad1 = creerFeuille(20);
	tree *ag1 = creerFeuille(30);
	tree *ad2 = creerFeuille(40);
	tree *ag2 = creerFeuille(50);
	tree *arbre1 = construireArbre(ag1,ad1,100);
	tree *arbre2 = construireArbre(ag2,ad2,200);
	tree *arbre = construireArbre(arbre1,arbre2,1000);

	parcours_prefixe(arbre);
	printf("somme %d\n",countNodes(arbre) );
	//clean_tree(arbre1);
	printf("profondeur: %d\n",profondeur(arbre) );
	
	return 0;
}

