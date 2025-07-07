#ifndef SINGLY_H
#define SINGLY_H

struct SinglyLLNode{
	int value;
	struct SinglyLLNode *next;
};

void addInFront(struct SinglyLLNode **head, int newValue);
/* 
 * all functions get copy of values. If we put paramter as *head, then it will get 
 * copy of head pointer. And then if we will change *head (inside a function) to 
 * new front, the *head will point to new fron. But as soon as our function 
 * terminated, out *head pointer which was a copy of original *head get deleted. So
 * now, our original *head pointer is still pointed to original head (it is not pointing to to the new front).
 * This is the reason for passing **pointer where we can change *pointer (or original *head).
 */

void add(struct SinglyLLNode **head, int newValue);
/*
 * We can add Node in Last position using *pointers only. But we required **pointer because 
 * when we are adding an element in empty SinglyLinedList then we will have to modify the pointer.
 * That's why to handle addition in empty SinglyLikedList, **pointer is required.
 */

void delete(struct SinglyLLNode **head, int keyValue);
/*
 * Here we need **head only if we have to delete the head.
 */

void print(struct SinglyLLNode *head);

#endif   
