#include "binary_trees.h"


/**
 * binary_tree_is_root - check if the node is root.
 * @node: pointer to the node.
 * Return: 0 if it's not leaf and 1 if it is.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int ReturnInt = 0;

	if (node && node->parent == NULL)
	{
		return (ReturnInt + 1);
	}
	return (ReturnInt);
}
