#ifndef DOUBLY_H
#define DOUBLY_H

struct DoublyLLNode{
	int value;
	struct DoublyLLNode *next;
	struct DoublyLLNode *prev;
};

void addAtFront_DLL(struct DoublyLLNode **head, int newValue);
void addAtEnd_DLL(struct DoublyLLNode **head, int newValue);
void add_DLL(struct DoublyLLNode **head, int newValue, int index);

int removeFront_DLL(struct DoublyLLNode **head);
int removeEnd_DLL(struct DoublyLLNode **head);
int remove_DLL(struct DoublyLLNode **head);

void print_DLL(struct DoublyLLNode *head);

#endif
