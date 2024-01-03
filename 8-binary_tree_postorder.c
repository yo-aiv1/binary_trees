#include "binary_trees.h"


/**
 * binary_tree_postorder - go through a binary tree using postorder traversal.
 * @tree: pointer to the binary tree node.
 * @func: pointer to the function to call each one.
 * Return: No return.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
