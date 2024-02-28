#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - function to calculate tree height
 * @tree: the current tree
 *
 * Return: returns size of tree
 */

/**
 * max - Returns the maximum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The maximum of a and b
 */
size_t max(size_t left_height, size_t right_height)
{
    return (left_height > right_height ? left_height : right_height);
}

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
		return 1 + max(left_height, right_height);
	}
}
