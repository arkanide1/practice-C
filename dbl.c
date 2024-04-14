#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
} Node;
typedef Node *dblist;

Node *getNode(int val){
	Node *newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL){
		newNode->data = val;
		newNode->prev = NULL;
		newNode->next = NULL;
	}
	return newNode;
}

void afficher (dblist L){
	if (L == NULL){
		printf("NULL\n");
	}else{
		printf("%d --> " , L->data);
		afficher(L->next);
	}
}
void insertBeg(dblist *head , int  n){
	int x;
	for (int i = 0 ;i<n;i++){
		printf("enter a value:");
		scanf("%d", &x);
		Node *newNode = getNode(x);
		if (*head != NULL){
			newNode->next = *head;
			(*head)->prev = newNode;
		}
		*head = newNode;
	}
}
void insertEnd(dblist *head , int n){
	int x;
	for (int i = 0 ;i<n;i++){
		printf("enter a value :");
		scanf("%d", &x);
		Node *newNode = getNode(x) , *temp;
		if (*head == NULL){
		*head = newNode;
		}else{
			for (temp = *head ;temp->next != NULL;temp = temp->next);
			temp->next = newNode;
			newNode->prev= temp;
		} 
	}
}

void insertposK(dblist *head , int k){
	if ( k == 1 || *head == NULL || (*head)->next == NULL || (*head)->next->next== NULL){
		printf("error occured\n");
		exit(1);
	}
	int x ;
	printf("enter a value :");
	scanf("%d", &x);
	Node *newNode = getNode(x),*temp = *head;
	int pos = 1;
	for (temp = *head ;pos <=k && temp->next!=NULL; pos++ , temp = temp->next)
	if (pos ==k && temp->next != NULL){
		newNode->prev = temp->prev;
		newNode->next= temp;
		temp->prev->next= newNode;
		temp->prev = newNode;
	}
}

void supprimerBeg(dblist *head){
	Node *temp;
	if (*head != NULL){
		temp = *head;
		*head= (*head)->next;
		if (*head != NULL){
			(*head)->prev=NULL;
		}
		free(temp);
	}
}
void supprimerEnd(dblist *head){
	if (*head != NULL){
		if ((*head)->next  == NULL){
			*head == NULL;
		}else{
			Node *temp;
			for (temp = *head;temp->next != NULL;temp = temp->next );
			temp->prev->next= NULL;
			free(temp);
		}
	}
}
void deleteNode(dblist *head ,Node *p){
	if (p->next != NULL){
		p->next->prev = p->prev;
	}
	if (p->prev != NULL){
		p->prev->next = p->next;
	}else{
		(*head)= p->next;
	}
	free(p);

}



int main(){
	dblist head =NULL;
	Node *newNode = getNode(10) , *temp;
	//insertBeg(&head , 3);
	//insertposK(&head , 2);
	insertEnd(&head , 3);
	afficher(head);

	//supprimerEnd(&head);
	deleteNode(&head , head);
	afficher(head);
	return 0;

}
