#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node, or NULL if no sibling is found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child (if exists) */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, return the left child (if exists) */
	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL); /* No sibling found */
}
