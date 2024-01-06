#include "binary_trees.h"


/**
 * trees_ancestor - find the lowest common ancestor of two nodes
 * @first: pointer to the node
 * @second: pointer to the node
 * Return: found the int
 */
int trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	while (second != NULL)
	{
		if (second == first)
			return (1);
		second = second->parent;
	}
	return (0);
}
/**
 * binary_trees_ancestor - find the sibling of a node.
 * @first: pointer to the node
 * @second: pointer to the node
 * Return: pointer to the sibling node.
 */


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (trees_ancestor(first, second))
		return ((binary_tree_t *)first);

	if (trees_ancestor(first, second))
		return ((binary_tree_t *)first);
	return (binary_trees_ancestor(first->parent, second));
}
