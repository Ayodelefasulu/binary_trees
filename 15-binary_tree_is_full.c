#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node
 *
 * Return: Number of leaves in the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* if a node has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If a node has exactly two children, check its subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
