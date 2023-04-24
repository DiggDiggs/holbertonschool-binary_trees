#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full
 * @tree : Tree to check
 * Return: true when tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || ((!tree->left) != (!tree->right)))
		return (0);
	if (tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (1);
}
