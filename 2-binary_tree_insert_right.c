#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node right
 * @parent: the pointer to the parent node
 * @value: value to be inserted at node
 *
 * Return: returns pointer to the new node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		printf("Mem allocation failed\n");
		return (NULL);
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	/* Set the right child of parent to the new node */
	parent->right = newNode;

	return (newNode);
}
