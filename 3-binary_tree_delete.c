#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a tree
 * @tree: tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	if (tree->parent)
	{
		if (tree->parent->right == tree)
			tree->parent->right = NULL;
		else
			tree->parent->left = NULL;
	}
	free(tree);
}
