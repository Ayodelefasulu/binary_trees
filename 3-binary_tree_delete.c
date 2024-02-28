#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - function to delete a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Recursively delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
