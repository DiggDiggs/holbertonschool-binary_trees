#include "binary_trees.h"

/**
 * binary_tree_preorder - check if is root
 * @tree: Head of tree
 * @func: Function to call on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;
	/* 1 */
	func(tree->n);
	/* 2 */
	binary_tree_preorder(tree->left, func);
	/* 3 */
	binary_tree_preorder(tree->right, func);
}
