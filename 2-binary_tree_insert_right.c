#include "binary_trees.h"




binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewTree;

	NewTree = malloc(sizeof(binary_tree_t));
	if (parent == NULL || NewTree == NULL)
	{
		return (NULL);
	}

	NewTree->n = value;
	NewTree->parent = parent;
	NewTree->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = NewTree;
	}

	parent->right = NewTree;

	return (NewTree);
}
