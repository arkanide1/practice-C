#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data ;
    struct Node *next;
}Node;

typedef Node *File;

void inisialiser(File *F){
    (*F) = NULL;
}
int isEmpty(File F){
    return F == NULL;
}

void enfiler(File *F, int x){
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL){
        printf("impossible d'enfiler\n");
    }else{
        temp->data= x;
        if (isEmpty(*F)){
            *F = temp;
            temp->next = temp;
        }else{
            temp->next=(*F)->next;
            (*F)->next=temp;
            *F = temp;
        }
    }
}

void defiler(File *F){
    if (isEmpty(*F)){
        printf("impossible de defile\n");
    }else{
        if ((*F)->next == *F){
            free(*F);
            inisialiser(F);
        }else{
            Node *temp = (*F)->next;
            (*F)->next= temp->next;
            free(temp);
        }
    }
}
void afficher(File F){
    Node *temp = F->next;
    while (temp != F){
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}


int main(){
    File F = NULL;
    enfiler(&F , 10);
    enfiler(&F , 20);
    enfiler(&F , 30);
    enfiler(&F , 40);
    afficher(F);
    defiler(&F);
    afficher(F);
    
    return 0;
}