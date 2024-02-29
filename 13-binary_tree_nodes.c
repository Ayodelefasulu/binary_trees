#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of leaves (at least 1)in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left != NULL || tree->right != NULL) ||
		(tree->left != NULL && tree->right != NULL))
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
