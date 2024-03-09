#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct bloc{
	int val ;
	struct bloc *suiv;
}liste;

// affichage done 
void AfficherList(liste *tete);
void AfficherListRec(liste *tete);
void AfficherListRecInv(liste *tete);
//Modification
liste *InsererTete(liste *tete , int valeur);
liste *InsererMilieu(liste *tete , int valeur);
liste *InsererFin(liste *tete , int valeur);
liste *InsererFinRec(liste *tete , int valeur);
liste *SupprimerElt(liste *tete, int valeur);
//concatenation de deux listes 
liste *Concat2Listes(liste* tete1 , liste *tete2 );
liste *Concat2ListesSansRep(liste* tete1 , liste *tete2 );
//conparaison de deux listes 
void Compare(liste *tete1 , liste *tete2);
//fusion de deux liste 
liste *fusionner(liste *tete1 , liste *tete2);
liste *fusionnerRec(liste *tete1 , liste *tete2);
liste *fusionnerSansRep(liste *tete1 , liste *tete2);
liste *fusionnerRecSansRep(liste *tete1 , liste *tete2);
//FONCTIONS CONNEXES

bool existe(liste* tete , int val);
int somme (liste *tete);
int longueur(liste *tete);
int nbEltDiff(liste *tete);


int main(){
	//liste 1 
	liste *ma_liste1 = NULL;
	
	ma_liste1=InsererMilieu(ma_liste1, 0);
	ma_liste1=InsererMilieu(ma_liste1, 15);
	ma_liste1=InsererMilieu(ma_liste1, 15);
	ma_liste1=InsererMilieu(ma_liste1, 15);
	ma_liste1=InsererMilieu(ma_liste1, 25);


	//liste 2
	liste *ma_liste2=NULL;
	ma_liste2=InsererMilieu(ma_liste2, 0);
	ma_liste2=InsererMilieu(ma_liste2, 10);
	ma_liste2=InsererMilieu(ma_liste2, 10);
	ma_liste2=InsererMilieu(ma_liste2, 20);
	ma_liste2=InsererMilieu(ma_liste2, 30);
	ma_liste2=InsererMilieu(ma_liste2, 15);


	liste *ma_liste3 = NULL;
	ma_liste3 = Concat2Listes(ma_liste1,ma_liste2);
	AfficherList(ma_liste3);
	
	printf("\n");
	liste *ma_liste4 = NULL;
	ma_liste4= Concat2ListesSansRep(ma_liste1,ma_liste2);
	AfficherList(ma_liste4);
	printf("\n");

	liste *ma_liste5 = NULL;
	ma_liste5 =  fusionnerRec(ma_liste1, ma_liste2);
	AfficherList(ma_liste5);
	printf("\n");

	Compare(ma_liste1, ma_liste2);
	
	return 0;
}
void AfficherList(liste *tete){
	while (tete != NULL){
		printf("%d->" , tete->val);
		tete = tete->suiv;
	}	
	printf("NULL");
}
void AfficherListRec(liste *tete){
		if (tete == NULL){
			printf("NULL");
			
		}else {
			printf("%d->" , tete->val);
			AfficherListRec(tete->suiv);
		}
}
void AfficherListRecInv(liste *tete){
		if (tete == NULL){
			printf("NULL");
		}else {
			AfficherListRecInv(tete->suiv);
			printf("<-%d" , tete->val);
		}
}
liste *InsererTete(liste *tete , int valeur){
	liste *new_list = malloc(sizeof(liste));

	new_list->val = valeur;

	if (tete != NULL){
		new_list->suiv = tete;
	}else{
		new_list->suiv=NULL;
	}
	
	return new_list;
}
liste *InsererMilieu(liste *tete , int valeur){
    liste *newlist = malloc(sizeof(liste));
    if(tete == NULL){
        newlist->val = valeur;
        newlist->suiv = NULL;
        return newlist;
    } else {
        if (valeur < tete->val){ // valeur est inferieur a la tete 
            return InsererTete(tete , valeur);
        } else {
            liste *courant = tete;
            liste *suivant = tete->suiv;
            while (suivant != NULL && suivant->val < valeur){
                suivant = suivant->suiv;
                courant = courant->suiv;
            }
            newlist->val = valeur;
            newlist->suiv = suivant;
            courant->suiv = newlist;
            return tete;
        }
    }
}

liste *InsererFin(liste *tete , int valeur){
	liste *new_list = (liste *)malloc(sizeof(liste));
	new_list->val = valeur;
	new_list->suiv = NULL;
	liste *courant = tete;
	if (tete == NULL){
		return new_list;
	}else {
		while (courant->suiv != NULL){
			courant = courant->suiv;
		}
	}
	courant->suiv = new_list;
	return tete;
}


liste *InsererFinRec(liste *tete ,int valeur){
	if (tete == NULL){
		liste *new_list = malloc (sizeof(liste));
		new_list->val=valeur;
		new_list->suiv= NULL;
		return new_list;
	}else {
		tete->suiv = InsererFinRec(tete->suiv , valeur);
	}
		return tete;
}
liste *SupprimerElt(liste *tete, int valeur){
	if (tete == NULL){
		printf("la liste est vide pas de suppresion!\n");
		return tete;
	}else {
		if (tete->val == valeur){
			return tete->suiv;
		}else {
			liste *courant = tete;
			liste *suivant = tete->suiv;
			while (suivant!= NULL && suivant->val != valeur){
				suivant = suivant->suiv;
				courant = courant->suiv;
			}
			if (suivant == NULL ){
				printf("non trouve , pas de suppresion!\n");
			}else {
				courant->suiv = suivant->suiv;
			}
			return tete;
		}
	}
}

liste *Concat2Listes(liste* tete1 , liste *tete2 ){
	if (tete1 == NULL) return tete2;
	if (tete2 == NULL) return tete1;

	liste *concat  = NULL;
	liste *courant = tete1;

	while (courant!= NULL){
		concat = InsererFin(concat , courant->val);
		courant = courant->suiv;
	}

	courant = tete2;
	while (courant!= NULL){
		concat = InsererFin(concat , courant->val);
		courant = courant->suiv;
	}
	return concat;
}
liste *Concat2ListesSansRep(liste* tete1 , liste *tete2 ){
	liste *concat = NULL;
	liste *courant = tete1;

	while (courant != NULL){
		if (existe(concat , courant->val)){
			courant = courant->suiv;
		}else {
			concat = InsererFin(concat , courant->val);
			courant = courant->suiv;
		}
	}
	courant = tete2;
	while ( courant != NULL){
		if (existe(concat , courant->val)){
			courant = courant->suiv;
		}else {
			concat = InsererFin(concat , courant->val);
			courant = courant->suiv;
		}
	}
	return concat;

}

void Compare(liste *tete1 , liste *tete2){
	int somme1 , somme2 ;
	int longueur1 , longueur2;
	int nbEd1 , nbEd2;
	somme1 = somme(tete1);
	somme2 = somme(tete2);
	longueur1 = longueur(tete1);
	longueur2 = longueur(tete2);
	nbEd1 = nbEltDiff(tete1);
	nbEd2 = nbEltDiff(tete2);

	printf("Comparaison des deux listes :\n");
	printf("liste 1 :");
	printf("somme : %d,lg : %d, elm diff : %d\n",somme1,longueur1,nbEd1);
	printf("liste 2 :");
	printf("somme : %d,lg : %d, elm diff : %d\n",somme2,longueur2,nbEd2);	
}

liste *fusionner(liste *tete1 , liste *tete2){
	liste *fusion = NULL;
	liste *courant1 = tete1;
	liste *courant2 = tete2;

	if (tete1 == NULL) return tete2;
	if (tete2 == NULL) return tete1;

	while ( courant1 != NULL && courant2 != NULL){
		if ( courant1->val < courant2->val){
			fusion = InsererFin(fusion , courant1->val);
			courant1 = courant1->suiv;

		}else{
			fusion = InsererFin(fusion , courant2->val);
			courant2 = courant2->suiv;
		}
	}
	while (courant1 != NULL){
			fusion = InsererFin(fusion , courant1->val);
			courant1 = courant1->suiv;
	}
	while (courant2 != NULL){
			fusion = InsererFin(fusion , courant2->val);
			courant2 = courant2->suiv;
	}
	return fusion;
}

liste *fusionnerSansRep(liste *tete1 , liste *tete2){
	liste *fusion = NULL;
	liste *courant1 = tete1;
	liste *courant2 = tete2;

	while ( courant1 != NULL && courant2 != NULL){
		if ( courant1->val < courant2->val){
			if (existe(fusion , courant1->val)){
				courant1  = courant1->suiv;
			}else{
				fusion = InsererFin(fusion , courant1->val);
				courant1 = courant1->suiv;
			}

		}else{
			if (existe(fusion , courant2->val)){
				courant2  = courant2->suiv;
			}else{
				fusion = InsererFin(fusion , courant2->val);
				courant2 = courant2->suiv;
			}
		}
	}
	while (courant1 != NULL){
			if (existe(fusion , courant1->val)){
				courant1  = courant1->suiv;
			}else{
				fusion = InsererFin(fusion , courant1->val);
				courant1 = courant1->suiv;
			}
	}
	while (courant2 != NULL){
			if (existe(fusion , courant2->val)){
				courant2  = courant2->suiv;
			}else{
				fusion = InsererFin(fusion , courant2->val);
				courant2 = courant2->suiv;
			}
	}
	return fusion;

}

liste *fusionnerRec(liste *tete1 , liste *tete2){
	if (tete1 == NULL) return tete2;
	if (tete2 == NULL) return tete1;

	liste *fusion = NULL;
	if (tete1->val < tete2->val){
		fusion = InsererFin(fusion , tete1->val);
		fusion->suiv = fusionnerRec(tete1->suiv ,tete2);
	}else {
		fusion = InsererFin(fusion , tete2->val);
		fusion->suiv = fusionnerRec(tete1 , tete2->suiv);
	}
	return fusion;
}
liste *fusionnerRecSansRep(liste *tete1 , liste *tete2){

	liste *fusion = NULL;
	if (tete1->val < tete2->val){
		if (existe(fusion, tete1->val )){
			tete1 = tete1->suiv;
		}else{
			fusion = InsererFin(fusion , tete1->val);
			fusion->suiv = fusionnerRecSansRep(tete1->suiv ,tete2);
			tete1 = tete1->suiv;
		}
	}else {
		if (existe(fusion, tete2->val )){
			tete2 = tete2->suiv;
		}else {
			fusion = InsererFin(fusion , tete2->val);
			fusion->suiv = fusionnerRecSansRep(tete1 , tete2->suiv);
			tete2 = tete2->suiv;
		}
	}
	return fusion;
}



bool existe(liste* tete , int val){
	if (tete == NULL){
		return false;
	}else {
		if (tete->val == val ){
			return true ;
		}else {
			return existe(tete->suiv , val);
		}
	}
}
int somme (liste *tete){
	if (tete == NULL){
		return 0;
	}else {
		return tete->val + somme(tete->suiv);
	}
}

int longueur(liste *tete){
	if (tete == NULL){
		return 0;
	}else {
		return 1+ longueur(tete->suiv);
	}
}
int nbEltDiff(liste *tete){
	// nombre d'elements different 
	liste *tmp = NULL;
	liste *courant = tete;
	while (courant != NULL){
		if (existe(tmp , courant->val)){
			courant = courant->suiv;
		}else{
			tmp = InsererFin(tmp , courant->val);
			courant = courant->suiv;
		}
	}
	return longueur(tmp);
}