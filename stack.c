#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef Node *Stack;

int isEmpty(Stack P){
    return (P == NULL);
}

void push(Stack *P , int x){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data= x;
    newNode->next= *P;
    (*P)= newNode;
}

void pop(Stack *P){
    if (isEmpty(*P)){
        printf("stack is empty\n");
    }else{
        Node *temp = (*P);
        (*P) = (*P)->next;
        free(temp);
    }
}

int top(Stack P){
    if (isEmpty(P)){
        printf("stack is empty\n");
        return 0;
    }else{
        return P->data;
    }
}


void afficher(Stack P){
    if (P == NULL){
        printf("NULL\n");
    }else{
        printf("%d --> ", P->data);
        afficher(P->next);
    }
}

int main(){
    Stack P=NULL;
    push(&P, 10);
    push(&P, 20);
    push(&P, 30);
    afficher(P);
    // printf("%d\n",top(P));
    // pop(&P);
    // printf("%d\n",top(P));
    // pop(&P);
    // printf("%d\n",top(P));
    return 0;

}