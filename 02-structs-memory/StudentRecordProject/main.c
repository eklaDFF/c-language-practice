#include <stdio.h>
#include "student.h"

int main(void)
{
	struct Student *head = NULL;
	int option;
	while(1){
		printf("\n-----Student Records System-----\n");
		printf("1. Add Record\n2. Vew All\n3. Search\n4. Delete\n5. Exit\n");
		printf("Now Enter What do you want : ");
		scanf("%d", &option);

		switch(option){
			case 1:
				add_student(&head);
				break;
			case 2:
				view_student(head);
				break;
			case 3:
				search_student(head);
				break;
			default:
				printf("Currently this option not available!\n");
		}
	}
}
