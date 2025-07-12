#ifndef BST_H
#define BST_H

struct BSTNode{
	int value;
	struct BSTNode *left;
	struct BSTNode *right;
};

void insert(struct BSTNode **root, int newValue);
void traverse(struct BSTNode *root);

#endif
