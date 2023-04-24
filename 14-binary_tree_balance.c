#include "binary_trees.h"

/**
 * binary_tree_balance - Find count of nodes
 * @tree : Tree to check
 * Return: sum of nodes in children plus one, or 0 if is leaf
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((int)binary_tree_height(tree->left)
		- (int)binary_tree_height(tree->right));
}



/**
 * binary_tree_height - Find height of a tree
 * @tree : Tree to check
 * Return: Height of children + 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l < r)
		l = r;
	return (l + 1);
}
