#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node
 * @parent: the parnet pointer for the new tree.
 * @value: value parent value.
 * Return: pointer to the new created binary tree.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewTree;

	NewTree = malloc(sizeof(binary_tree_t));
	if (!NewTree)
	{
		return (NULL);
	}

	NewTree->n = value;
	NewTree->parent = parent;
	NewTree->left = NewTree->right = NULL;

	return (NewTree);
}
