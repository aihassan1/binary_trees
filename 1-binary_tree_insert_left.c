#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the left child of a parent.
 *
 * @parent: Pointer to the parent node.
 * @value: Integer value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = NULL;
	
	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
