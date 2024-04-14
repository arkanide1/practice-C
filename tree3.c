#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
    int data ;
    struct tree *left , *right;
}tree ;

tree *createLeaf(int value){
    tree *newleaf = (tree*)malloc(sizeof(tree));
    if (newleaf == NULL){
        fprintf(stderr, "impossible de cree la feuille \n");
        exit(EXIT_FAILURE);
    }
    newleaf->data= value;
    newleaf->left = NULL;
    newleaf->right = NULL;
    printf("creation de noeud %d\n", value);
    return newleaf;
}
tree *constructTree(tree *arbre_g , tree *arbre_d , int value){
    tree *interiorNode =createLeaf(value);
    interiorNode->left= arbre_g;
    interiorNode->right= arbre_d;
    return interiorNode;
}
void parcours_prefixe(tree *tr){
    if (tr == NULL){
        printf("NULL\n");
    }else{
        printf("%d\n", tr->data);
    }
    if (tr->left != NULL){
        parcours_prefixe(tr->left);
    }
    if (tr->right != NULL){
        parcours_prefixe(tr->right);
    }
}
int taille(tree *tr){
    if (tr == NULL){
        return 0;
    }else{
        return 1+taille(tr->left)+taille(tr->right);
    }
}
int profondeur(tree *tr){
    if (tr == NULL){
        return 0;
    }
    int profondeurG = 1+profondeur(tr->left);    
    int profondeurD = 1+profondeur(tr->right);
    return  1+( profondeurG > profondeurD ) ? profondeurG : profondeurD;
}

void cleanTree(tree *tr) {
    if (tr != NULL) {
        cleanTree(tr->left);
        cleanTree(tr->right);
        printf("suppression de %d\n", tr->data);
        tr = NULL;
        free(tr);
    }
}


int recherche(tree *racine , int x){
    if (racine == NULL){
        return 0;
    }else{
        if (x < racine->data){
            recherche(racine->left , x);
        }else if (x > racine->data){
            recherche(racine->right ,x);
        }else{
            return 1;
        }
    }
}

void ajout(tree **racine , int x){
    if (*racine == NULL){
        *racine = createLeaf(x);
    }else{
        if (x < (*racine)->data ){
            ajout( &(*racine)->left , x);
        }else{
            ajout( &(*racine)->right , x);
        }
    }
}
tree *ajout2(tree *racine , int x){
    if (racine != NULL){
        if (x < racine->data){
            racine->left = ajout2(racine->left, x);
        }else if (x > racine->data){
            racine->right = ajout2(racine->right, x);
        }
    }else{
        racine = createLeaf(x);
    }
    return racine ;
}
void supprimerAllSubTree(tree **racine , int x){
    if (x < (*racine)->data ){
        supprimer(&(*racine)->left , x);
    }else if (x > (*racine)->data ){
        supprimer(&(*racine)->right , x);
    }else{
        cleanTree(*racine);
        //*racine = NULL;
    }
}


int main(){
    tree *arbre = constructTree(constructTree(createLeaf(8), createLeaf(3) , 2) ,createLeaf(4), 6 );
    tree *arbre2 = constructTree(constructTree(createLeaf(6), createLeaf(9), 8),constructTree(createLeaf(11), createLeaf(16), 15),10);
    tree *arbre3=NULL;
    int t[]={55,34,49, 20, 38,58,10, 50, 25, 22, 24};
    //parcours_prefixe(arbre);
    parcours_prefixe(arbre2);
    ajout(&arbre2, 14);
    parcours_prefixe(arbre2);
    arbre2 = ajout2(arbre2, 12);
    parcours_prefixe(arbre2);

    printf("taille : %d\n", taille(arbre));
    printf("profondeur : %d\n", profondeur(arbre));
    //cleanTree(arbre);
    printf("%d\n", recherche(arbre ,3));

    for (int i = 0 ;i< (sizeof(t)/sizeof(int));i++){
        ajout(&arbre3, t[i]);
    }
    parcours_prefixe(arbre3);
    supprimer(&arbre3, 22);
    parcours_prefixe(arbre3);

    return 0;
}