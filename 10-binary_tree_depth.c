#include "binary_trees.h"

/**
 * binary_tree_depth -  depth of a node in a binary tree.
 * @tree: pointer to the binary tree node.
 * Return: size_t depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || !tree->parent)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
