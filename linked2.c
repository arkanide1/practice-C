#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee{
    int age ;
    int code ;
    float salaire;
}employee;

typedef struct node{
    employee data;
    struct node *next;
}node;
typedef node *linkedlist;

void afficherlist(node *head);
node *getNode();
linkedlist createlist(int N);
void insertAtBeginning(linkedlist *pl);
void insertAtEnd(linkedlist *pl);
void insertAtEndRec(linkedlist *pl);
void insertAtPosK(linkedlist *pl, int k);

int main(){
    linkedlist my_employees;
    my_employees = createlist(2);
    afficherlist(my_employees);
    insertAtBeginning(&my_employees);
    //insertAtEnd(&my_employees);
    insertAtEndRec(&my_employees);
    afficherlist(my_employees);
    insertAtPosK(&my_employees, 2);
    afficherlist(my_employees);
    return 0;
}
node *getNode(){
    node *newNode = (node*)malloc(sizeof(node));
    if (newNode != NULL){
    printf("enter new data\n");
    printf("age : ");
    scanf("%d", &newNode->data.age);
    printf("code : ");
    scanf("%d", &newNode->data.code);
    printf("salaire : ");
    scanf("%f", &newNode->data.salaire);
    }else {
        printf("no space memory\n");
        exit(1);
    }
    return newNode;
}
linkedlist createlist(int N){
    linkedlist head = getNode();
    node *current =head;

    for (int i = 1 ;i<N;i++){
        current->next = getNode();
        current = current->next;
    }
    return head;
}
void insertAtBeginning(linkedlist *pl){
    node *newNode = getNode();
    newNode->next = *pl;
    *pl = newNode;
}
void insertAtEnd(linkedlist *pl){
    node *newNode = getNode();
    if(*pl == NULL){
        *pl = newNode;
    }else {
        node *current = *pl;
        while(current!= NULL){
            current= current->next;
        }
        current->next = newNode;
    }
}
void insertAtEndRec( linkedlist *pl){
    if (*pl == NULL){
        *pl = getNode();
    }else {
        insertAtEndRec( &(*pl)->next);
    }
}

void insertAtPosK(linkedlist *pl, int k){
    if ((*pl)->next == NULL || *pl == NULL){
        printf("impossible insertion\n");
    }else{
        if (k==1){
            printf("invalid position\n");
        }else {
            node *current = *pl , *prev ;
            int pos = 1;
            while(pos < k && current->next != NULL){
                prev = current ;
                current = current->next;
                pos++;
            }
            if (pos == k && current->next != NULL){
                node *newNode = getNode();
                prev->next = newNode;
                newNode->next = current;
            }else {
                printf("invalide position\n");
            }
        }
    }
}

void afficherlist(node *head){
    if (head == NULL){
        printf("NULL\n");
    }else {
        printf("(%d, %d, %.2f) -->", head->data.age, head->data.code, head->data.salaire);
        afficherlist(head->next);
    }
}
