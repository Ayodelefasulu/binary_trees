#include <math.h>
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
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0); /* Height of empty tree */
	}
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		return ((left_height > right_height ? left_height : right_height) + 1);
	}
}
