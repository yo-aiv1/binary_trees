#include "binary_trees.h"



int binary_tree_is_parent_full(const binary_tree_t *node);
int tree_height(const binary_tree_t *tree);

/**
 * tree_height - measures the height of a tree.
 * @tree: pointer to the tree.
 * Return: height.
 */

int tree_height(const binary_tree_t *tree)

{

	size_t left_height;
	size_t right_height;



	if (tree == NULL || (!tree->left && !tree->right))

	{

		return (0);

	}



	left_height = tree_height(tree->left);

	right_height = tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);

}

/**
 * binary_tree_is_leaf - check if the node is leaf.
 * @node: pointer to the node.
 * Return: 0 if it's not leaf and 1 if it is.
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{

	int ReturnInt = 0;



	if (node && node->left == NULL && node->right == NULL)

	{

		return (ReturnInt + 1);

	}

	return (ReturnInt);

}

/**
 * binary_tree_is_parent_full - check if a node is a parent.
 * @node: pointer to the node.
 * Return: 1 if node is a parent, 0 if not.
 */

int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int parent = 0;

	if (node && node->left && node->right)
		parent = 1;

	return (parent);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect.
 * @tree: pointer to the tree.
 * Return: 1 if tree is perfect, 0 if not.
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && tree_height(tree->left) == tree_height(tree->right))
	{
		if (tree_height(tree->left) == -1)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (binary_tree_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
