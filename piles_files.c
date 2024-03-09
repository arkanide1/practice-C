#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//def des structs 
typedef struct b {
    int val ;
    struct b *suiv;
}bloc;

typedef struct liste{
    bloc *tete;
    bloc *queue;
    bool pf;
    int taille , nbr_elm_diff , somme , min , max;
}liste;

//functions 
liste init_liste(bool pf);
// pour inisialiser une file ou pile 
// true pour inisialiser une file flase pour pile  
int somme(bloc *ma_liste);
bool existe(bloc *tete ,int val);
int longueur(bloc *tete);
int nbrEltDiff(bloc *tete);
int maximum(bloc *tete);
int minimum(bloc *tete);
bloc *InsererFin(bloc *tete , int valeur);

void afficher_liste(liste l);

liste empiler(liste pile, int val) ;
liste emfiler(liste file , int val);
int  depiler_defiler(liste  *l);

int main(){
    liste mapile = init_liste(false);
    liste mafile = init_liste(true);

    mapile = empiler(mapile, 10);
    mapile = empiler(mapile, 20 );
    mapile = empiler(mapile, 30 );
    mapile = empiler(mapile, 40 );
    afficher_liste(mapile);


    mafile = emfiler(mafile, 10 );
    mafile = emfiler(mafile, 20 );
    mafile = emfiler(mafile , 30);
    mafile = emfiler(mafile , 40 );
    afficher_liste(mafile);

    printf("depile :%d\n", depiler_defiler(&mapile));
    printf("depile :%d\n", depiler_defiler(&mapile));
    afficher_liste(mapile);
    printf("defile :%d\n", depiler_defiler(&mafile));
    printf("defile :%d\n", depiler_defiler(&mafile));
    afficher_liste(mafile);
    return 0;
}



liste init_liste(bool pf){
    liste l;
    l.tete = l.queue = NULL;
    l.taille = l.somme = l.nbr_elm_diff = 0;
    l.pf = pf;
    l.max = l.min = -1;   
    return l;
}
int somme(bloc *ma_liste){
    if (ma_liste == NULL){
        return 0;
    }else {
        return ma_liste->val + somme(ma_liste->suiv);
    }
}
bool existe(bloc *tete , int val){
    if (tete == NULL){
        return false;
    }else{
        if (tete->val == val ){
            return true;
        }else {
            return existe(tete->suiv , val);
        }
    }
}
int longueur(bloc *tete){
    if (tete == NULL){
        return 0;
    }else{
        return 1 + longueur(tete->suiv);
    }
}
int nbrEltDiff(bloc *tete){
    bloc *tmp =NULL;
    bloc *courant = tete;
    while (courant != NULL){
        if (existe(tmp,courant->val)){
            courant = courant->suiv;
        }else {
            tmp = InsererFin(tmp , courant->val);
            courant = courant->suiv;
        }
    }
    return longueur(tmp);
}

bloc *InsererFin(bloc *tete , int valeur){
	bloc *new_list = (bloc *)malloc(sizeof(bloc));
	new_list->val = valeur;
	new_list->suiv = NULL;
	bloc *courant = tete;
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

int maximum(bloc *tete){
    if (tete == NULL){
        return -1;
    }else {
        int max_val = tete->val ;
        bloc *p = tete->suiv ;
        while ( p != NULL){
            if (max_val < p->val){
                max_val = p->val;
            }
            p = p->suiv;
        }
        return max_val;
    }
}

int minimum(bloc *tete){
    if (tete == NULL){
        return -1;
    } else {
        int min_val = tete->val; 
        bloc *p = tete->suiv;

        while (p != NULL){
            if (min_val > p->val){
                min_val = p->val;
            }
            p = p->suiv;
        }
        return min_val;
    }
}

void afficher_liste(liste l){
    bloc *p = l.tete;

    printf("\n--------------------\n");

    if ( l.pf == true ){
        printf("info sur la file :\n");
    }else {
        printf("info sur la pile :\n");
    }
    printf("taille: %d, nDiff: %d, min: %d, max: %d, somme: %d\n", l.taille, l.nbr_elm_diff, l.min, l.max, l.somme);
    printf("contenu: \n");
    while(p != NULL){
        printf("%d ", p->val);
        p = p->suiv;
    }
    printf("\n--------------------\n");
}

liste empiler(liste pile, int val){
    bloc *p = malloc(sizeof(bloc));
    p->val = val;
    p->suiv = pile.tete;
    pile.tete = p;

    pile.taille++;
    pile.nbr_elm_diff = nbrEltDiff(pile.tete);
    pile.max = maximum(pile.tete);
    pile.min  = minimum(pile.tete);
    pile.somme = pile.somme +val;
    return pile ;
}

liste emfiler(liste file, int val) {
    bloc *p = malloc(sizeof(bloc));
    p->val = val;
    p->suiv = NULL;

    if (file.tete == NULL) {
        file.tete = p;
        file.queue = p;
    } else {
        file.queue->suiv = p;
        file.queue = p;
    }

    file.taille++;
    file.nbr_elm_diff = nbrEltDiff(file.tete);
    file.max = maximum(file.tete);
    file.min = minimum(file.tete);
    file.somme = file.somme + val;

    return file;
}
int  depiler_defiler(liste  *l){
    if (l->tete != NULL){
        int tmp = l->tete->val;
        bloc *p = l->tete;
        l->tete = l->tete->suiv;

        l->taille--;
        l->nbr_elm_diff = nbrEltDiff(l->tete);
        l->max = maximum(l->tete);
        l->min = minimum(l->tete);
        l->somme = l->somme - p->val;
        free(p);
        return tmp;
    }else{
        printf("la list est vide! ");
        return -9999;
    }
}