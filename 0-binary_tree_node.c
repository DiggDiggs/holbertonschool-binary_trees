#include "binary_trees.h"


/**
 * binary_tree_node - create a new binary tree node
 * @parent: parent of new node
 * @value: value of new node
 *
 * Return: adress of new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
