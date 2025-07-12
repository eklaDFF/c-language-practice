#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void insert(struct BSTNode **root, int newValue)
{
	if(*root == NULL){
		*root = malloc(sizeof(struct BSTNode));
		(*root) -> value = newValue;
		(*root) -> left = NULL;
		(*root) -> right = NULL;
		return;
	}
	if((*root) -> value >= newValue){
		insert(&((*root)->left), newValue);
	} else {
		insert(&((*root)->right), newValue);
	}
}

void traverse(struct BSTNode *root)
{
	if(root == NULL){
		return;
	}
	traverse(root -> left);
	printf("%d ", root -> value);
	traverse(root -> right);
}
