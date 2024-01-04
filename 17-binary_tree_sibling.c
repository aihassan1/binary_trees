#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling is found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling, *temp;

	/* Check for NULL node or if the node has no parent */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* Set temp to the parent of the given node */
	temp = node->parent;

	/* Check if the parent has both left and right children */
	if (temp->left == NULL || temp->right == NULL)
	{
		return (NULL);
	}

	/* Determine the sibling based on the relationship with the parent */
	if (temp->left == node)
	{
		sibling = temp->right;
	}
	else
	{
		sibling = temp->left;
	}

	return (sibling);
}
