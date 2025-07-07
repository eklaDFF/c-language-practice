#include <stdio.h>
#include "include/singly.h"
#include "include/doubly.h"

int main()
{
	struct SinglyLLNode *head = NULL;
	print(head);
	addInFront(&head, 5);
	print(head);
	addInFront(&head, 6);
	print(head);


	printf("Now Working with Doubly Linked List\n");
	struct DoublyLLNode *doublyLLHead = NULL;
	print_DLL(doublyLLHead);
	printf("\n");
	addAtFront_DLL(&doublyLLHead, 5);
	print_DLL(doublyLLHead);
	printf("\n");
	addAtFront_DLL(&doublyLLHead, 6);
	print_DLL(doublyLLHead);
	printf("\n");
}
