#include "binary_trees.h"


/**
 * binary_tree_preorder - go through a binary tree using pre-order traversal.
 * @tree: pointer to the binary tree node.
 * @func: pointer to the function to call each one.
 * Return: No return.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
