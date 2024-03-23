#include <stdio.h>

#include <stdlib.h>

typedef enum {false , true } bool;

typedef struct Node
{
    int data ;
    struct Node *next; 
}Node;

typedef Node *linkedlist; 

// affichage done 
void AfficherList(Node *tete);
void AfficherListRec(Node *tete);
void AfficherListRecInv(Node *tete);
//Modification
Node *InsererTete(Node *tete , int valeur);
Node *InsererMilieu(Node *tete , int valeur);
Node *InsererFin(Node *tete , int valeur);
Node *InsererFinRec(Node *tete , int valeur);
Node *SupprimerElt(Node *tete, int valeur);
//concatenation de deux listes 
Node *Concat2Listes(Node* tete1 , Node *tete2 );
Node *Concat2ListesSansRep(Node* tete1 , Node *tete2 );
//conparaison de deux listes 
void Compare(Node *tete1 , Node *tete2);
//fusion de deux liste 
Node *fusionner(Node *tete1 , Node *tete2);
Node *fusionnerRec(Node *tete1 , Node *tete2);
Node *fusionnerSansRep(Node *tete1 , Node *tete2);
Node *fusionnerRecSansRep(Node *tete1 , Node *tete2);
//FONCTIONS CONNEXES

bool existe(Node* tete , int val);
int somme (Node *tete);
int longueur(Node *tete);
int nbEltDiff(Node *tete);

//*******************cours*******************
Node *GetNode();
linkedlist createLinkedlist(int n );
void insertAtBeginning(linkedlist *pl);
void insertAtEnd(linkedlist *pl);
void insertAtEndRec(linkedlist *pl);
void insertAtPosK(linkedlist *pl, int k);

int main(){
    linkedlist mylist =createLinkedlist(3);

    AfficherList(mylist);
    insertAtBeginning(&mylist);
    insertAtEnd(&mylist);
    AfficherList(mylist);
    insertAtEndRec(&mylist);
    insertAtPosK(&mylist , 3);
    AfficherList(mylist);
    return 0;
}

void AfficherList(Node *tete){
    while (tete != NULL){
        printf("%d-->", tete->data);
        tete= tete->next;
    }
    printf("NULL\n");
}
Node *GetNode(){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL){
        printf("enter new data :");
        scanf("%d", &newNode->data);
        newNode->next == NULL;
    }else {
        puts("no space memory\n");
    }
    return newNode;
}
linkedlist createLinkedlist(int n ){
    int i ;
    linkedlist head = GetNode();
    Node *currentNode =head;
    for (i = 1;i<n;i++){
        currentNode->next = GetNode();
        currentNode = currentNode->next;
    }
    return head;
}
void insertAtBeginning(linkedlist *pl){
    Node *newNode = GetNode();
    if (newNode == NULL){
        printf("no space memory\n");
    }else {
        newNode->next = *pl;
        *pl = newNode;
    }
}

void insertAtEnd(linkedlist *pl){
    Node *newNode = GetNode();
    if (newNode != NULL){
        if (*pl == NULL){
            *pl = newNode;
        }else{
            Node *iter = *pl;
            while (iter->next != NULL){
                iter = iter->next;
            }
            iter->next = newNode;
        }
    }else{
        puts("no enough memory\n");
    }
}
void insertAtEndRec(linkedlist *pl){
    if (*pl = NULL){
        *pl = GetNode();
    }else{
        insertAtEndRec( &(*pl)->next);
    }
}
void insertAtPosK(linkedlist *pl, int k){
    if (*pl == NULL ||(*pl)->next == NULL){
        printf ("impossible for all k\n");
    }else {
        if (k== 1){
            printf("invalide position\n");
        }else{
            Node *current = *pl;
            Node *prev;
            int pos = 1;
            while (pos < k && current->next != NULL){
                prev = current;
                current = current->next;
                pos ++;
            }
            if (pos == k && current->next != NULL){   
                Node *newNode = GetNode();
                prev->next = newNode;
                newNode->next = current;
            }else {
                puts("invalide position\n");
            }
    }
    }
}