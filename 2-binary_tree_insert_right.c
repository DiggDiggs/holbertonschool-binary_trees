#include "binary_trees.h"


/**
 * binary_tree_insert_right - create a new binary tree node
 * @parent: parent of new node
 * @value: value of new node
 *
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->right = parent->right;
	if (node->right)
		node->right->parent = node;
	node->left = NULL;
	parent->right = node;

	return (node);
}
