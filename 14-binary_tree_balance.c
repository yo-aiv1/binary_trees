#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the binary tree node.
 * Return: size_t 0 or 1.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (tree == NULL)
	{
		return (0);
	}

	size_left = 0;
	if (tree->left)
	{
		size_left = 1 + binary_tree_balance(tree->left);
	}
	size_right = 0;
	if (tree->right)
	{
		size_right = 1 + binary_tree_balance(tree->right);
	}
	return (size_left  - size_right);
}
