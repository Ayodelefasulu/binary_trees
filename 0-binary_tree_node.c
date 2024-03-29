#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a node
 * @parent: the pointer to the parent node
 * @value: value to be inserted at node
 *
 * Return: returns pointer to the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		printf("Mem alloc failed\n");
		exit(1);
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
