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
 * binary_tree_size - Measures the size of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: an integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, nodes = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	/* Check if number of nodes is a power of 2 */
	if (1 << height == nodes)
		return (1);

	return (0);
}
