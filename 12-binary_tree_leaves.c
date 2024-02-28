#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leave - Counts the number of leaves in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
                return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		count++;
	}
	return (count + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
        //return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
