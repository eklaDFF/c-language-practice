#include <stdio.h>
#include <stdlib.h>

#include "../include/singly.h"


void addInFront(struct SinglyLLNode **head, int newValue)
{
	if(*head == NULL){
		*head = malloc(sizeof(struct SinglyLLNode));
		(*head) -> value = newValue;
		(*head) -> next = NULL;
	}else{
		struct SinglyLLNode *temp = malloc(sizeof(struct SinglyLLNode));
		temp -> value = newValue;
		temp -> next = *head;
		*head = temp;
	}
}

void print(struct SinglyLLNode *head)
{
	while(head != NULL){
		printf("%d\t", head -> value);
		head = head -> next;
	}
}
