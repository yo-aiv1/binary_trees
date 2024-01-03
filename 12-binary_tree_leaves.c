#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the binary tree node.
 * Return: size_t leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
		return (1);
	size_left = binary_tree_leaves(tree->left);
	size_right = binary_tree_leaves(tree->right);
	return (size_left + size_right);
}
