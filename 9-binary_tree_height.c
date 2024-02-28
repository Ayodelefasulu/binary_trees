#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate tree height
 * @tree: the current tree
 *
 * Return: returns size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
	{
		return (0); /* Height of empty tree */
	}

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	return ((left_h > right_h) ? (left_h + 1) : (right_h + 1));
}
