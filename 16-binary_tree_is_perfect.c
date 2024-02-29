#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree, or 0 if @tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: an integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);  /* Empty tree is not perfect */

	if (tree->left == NULL && tree->right == NULL)
		return (1);  /* Leaf node is considered perfect */

	/* Check if both left and right subtrees are full and have the same height */
	return (binary_tree_is_full(tree) &&
		binary_tree_height(tree->left) == binary_tree_height(tree->right));
}
