#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert new node as the right-child.
 * @parent: parent pointer.
 * @value: parent value.
 * Return: pointer to the new node or NULL if it failed.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewTree;

	if (parent == NULL)
	{
		return (NULL);
	}

	NewTree = malloc(sizeof(binary_tree_t));

	if (NewTree == NULL)
	{
		return (NULL);
	}

	NewTree->n = value;
	NewTree->parent = parent;
	NewTree->left = NULL;
	NewTree->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = NewTree;
	}

	parent->right = NewTree;

	return (NewTree);
}
