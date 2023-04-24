#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if is leaf
 * @node: node to check
 * Return: 1 is leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);
	return (1);
}
