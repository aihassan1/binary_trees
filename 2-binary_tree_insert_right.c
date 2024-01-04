#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	/*if parent is null -> return null*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/*create a new node and set the value ,set right & right ptrs are null */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*if parent has a right child -> new node will take it place */
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
