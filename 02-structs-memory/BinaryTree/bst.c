#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

struct BSTNode *successor(struct BSTNode *root);

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

struct BSTNode *delete(struct BSTNode *root, int value)
{
	if((root) == NULL){
		return root;
	}
	if(root -> value > value){
		root-> left = delete(root->left, value);
	}else if(root -> value < value){
		root-> right = delete(root->right, value);
	}else{
		if(root->left == NULL){
			struct BSTNode *temp = root->right;
			free(root);
			return temp;
		}
		if(root->right == NULL){
			struct BSTNode *temp = root->left;
			free(root);
			return temp;
		}

		struct BSTNode *temp = successor(root->right);
		root->value = temp->value;
		root->right = delete(root->right, temp->value);
	}
	return root;
}

struct BSTNode *successor(struct BSTNode *root)
{
	if(root->left == NULL){
		return root;
	}
	return successor(root->left);
}
	
