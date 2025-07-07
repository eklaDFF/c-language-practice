#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"

void add_student(struct Student **head)
{
	struct Student *newStudent = malloc(sizeof(struct Student));
	printf("\nEnter");
	printf("\nStudent ID : ");
	scanf("%d", &newStudent -> id);
	printf("\nStudent Name : ");
	scanf(" %[^\n]", newStudent -> name);
	printf("\n%s's marks : ", newStudent->name);
	scanf("%f", &newStudent -> marks);
	newStudent -> next = NULL;

	if(*head == NULL){
		*head = newStudent;
	}else{
		struct Student *temp = *head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp -> next = newStudent;
	}
}

void view_student(struct Student *head)
{ 
	while(head != NULL){
		printf("\n%d\t%s\t%f", head->id, head->name, head->marks);
		head = head->next;
	}
}

void search_student(struct Student *head)
{
	printf("\n::::: Search Mode :::::\n");
	printf("Here searching can be made using Student ID and Student Name\n");
	int search_mode;
	int search_id;
	char search_name[25];
	printf("Enter 1 -> to search by Student ID\nEnter 2 -> to search by Student Name\nEnter 3 -> to abort searching\n");
	scanf("%d", &search_mode);
	switch(search_mode){
		case 1:
			printf("\nEnter Student ID : ");
			scanf("%d", &search_id);
			while(head != NULL){
				if(head->id == search_id){
					printf("\n%d\t%s\t%f\n", head->id, head->name, head->marks);
					return;
				}
				head = head->next;
			}
			printf("\nNot Found\n");
			break;
		case 2:
			printf("\nEnter Student Name : ");
			scanf(" %[^\n]", search_name);
			while(head != NULL){
				if(strcmp(head->name, search_name) == 0){
					printf("\n%d\t%s\t%f\n", head->id, head->name, head->marks);
					return;
				}
				head = head->next;
			}
			printf("\nNot Found\n");
                        break;
		case 3:
			printf("\nSearch Aborted\n");
			break;
		default:
			printf("\nNot a valid input!\n");
	}
}		
