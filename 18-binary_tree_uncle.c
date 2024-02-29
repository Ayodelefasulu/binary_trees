#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node, or NULL if no uncle is found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* If node's parent is left of its parent,return right child of grandparent */
	if (grandparent->left == parent)
		return (grandparent->right);

	/* If node's parent is right of its parent,return left child of grandparent */
	if (grandparent->right == parent)
		return (grandparent->left);

	return (NULL); /* No uncle found */
}
