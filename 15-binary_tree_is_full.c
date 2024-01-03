#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the binary tree node.
 * Return: size_t 0 or 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
	{
		return (0);
	}
	return (binary_tree_is_full(tree->left) &&\
			binary_tree_is_full(tree->right));
}
