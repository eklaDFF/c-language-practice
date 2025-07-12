#include <stdio.h>
#include "bst.h"

int main(void)
{
	struct BSTNode *root = NULL;
	insert(&root, 4);
	traverse(root);
	printf("\n");
	insert(&root, 5);
	insert(&root, 3);
	traverse(root);
}

