#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: the pointer to the parent node
 * @value: value to be inserted at node
 *
 * Return: returns pointer to the new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
