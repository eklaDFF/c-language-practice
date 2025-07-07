#include <stdio.h>
#include <stdlib.h>

#include "../include/doubly.h"

void addAtFront_DLL(struct DoublyLLNode **head, int newValue)
{
	if(*head == NULL){
		*head = malloc(sizeof(struct DoublyLLNode));
		(*head) -> value = newValue;
	}else{
		struct DoublyLLNode *newNode = malloc(sizeof(struct DoublyLLNode));
		newNode -> value = newValue;
		newNode -> next = *head;
		(*head) -> prev = newNode;
		*head = newNode;
	}
}

void print_DLL(struct DoublyLLNode *head)
{
	printf("Printing Doubly Linked List");
	while(head != NULL){
		printf("%d\t", head -> value);
		head = head -> next;
	}
}

