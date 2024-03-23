#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode{
	int val ;
	struct bloc *next;
}ListNode;

struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL){
    	return NULL;
    }
    struct ListNode* newNode =NULL;
    struct ListNode* current = head;
	while(tmp != NULL){
		struct ListNode* tmp =current->next; 
        current->next = newNode;
        newNode = current;
        current = tmp;
	}
    
    
    
}

