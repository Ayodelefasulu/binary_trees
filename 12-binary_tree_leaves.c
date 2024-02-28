#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		i++;
	}
	return (i + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
