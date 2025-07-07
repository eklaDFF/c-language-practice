#ifndef STUDENT_H
#define STUDENT_H


struct Student{
	int id;
	char name[25];
	float marks;
	struct Student *next;
};

void add_student(struct Student **head);
void view_student(struct Student *head);
void search_student(struct Student *head);
void delete_student(struct Student **head);
void free_all(struct Student *head);


#endif
