#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert new node as the left-child.
 * @parent: parent pointer.
 * @value: parent value.
 * Return: pointer to the new node or NULL if it failed.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewTree;

	NewTree = malloc(sizeof(binary_tree_t));
	if (parent == NULL || NewTree == NULL)
	{
		return (NULL);
	}

	NewTree->parent = parent;
	NewTree->n = value;
	NewTree->left = parent->left;
	new->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = NewTree;
	}

	parent->left = NewTree;

	return (NewTree);
}
