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
void cleanTree(tree *tr){
    if (tr != NULL){
        cleanTree(tr->left);
        cleanTree(tr->right);
        printf("suppresion de %d\n", tr->data);
        free(tr);
    }
}


int main(){
    tree *arbre = constructTree(constructTree(createLeaf(8), createLeaf(3) , 2) ,createLeaf(4), 6 );
    parcours_prefixe(arbre);
    printf("taille : %d\n", taille(arbre));
    printf("profondeur : %d\n", profondeur(arbre));
    cleanTree(arbre);

    
    return 0;
}