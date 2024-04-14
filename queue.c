#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct File{
    Node *tete;
    Node *queue;
}File;

void initialiser(File *F){
    F->queue = F->tete = NULL;
}
int isEmpty(File F){
    return F.tete== NULL;
}

void enfiler(File *F , int x){
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL){
        printf("impossible d'enfiler\n");
    }else{
        temp->data= x;
        temp->next= NULL;
        if (isEmpty(*F)){
            F->queue = F->tete = temp;
        }else{
            F->queue->next = temp;
            F->queue = temp;
        }
    }
    printf("l'element %d est enfiler\n", x);
}
void defiler(File *F){
    if (isEmpty(*F)){
        printf("impossible de defile\n");
    }else{
        Node *temp = F->tete;
        printf("l'element %d est enfiler\n", temp->data);
        F->tete = F->tete->next;
        free(temp);
    }
}
void afficher(File F){
    Node *temp= F.tete;
    while(temp != NULL){
        printf("%d -->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    File F;
    F.tete = F.queue = NULL;
    enfiler(&F , 10);
    enfiler(&F , 20);
    enfiler(&F , 30);
    enfiler(&F , 40);
    afficher(F);
    defiler(&F);
    afficher(F);


    return 0;
}