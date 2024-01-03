#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the binary tree node.
 * Return: size_t nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
		return (0);
	size_left = binary_tree_nodes(tree->left);
	size_right = binary_tree_nodes(tree->right);
	return (1 + size_left + size_right);
}
