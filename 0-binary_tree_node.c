#include <stdlib.h>
#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		printf("Mem alloc failed\n");
		exit(1);
	}
	newNode -> n = value;
	newNode -> left = NULL;
	newNode -> right = NULL;
	newNode -> parent = parent;

	return (newNode);
}
