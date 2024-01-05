#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* An empty tree is considered full */
	if (tree == NULL)
	{
		return (0);
	}

	/* Check if the current node has either 0 or 2 children */
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
	{
		/* Recursively check for both left and right subtrees */
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	else
	{
		/* If the current node has 1 child, the tree is not full */
		return (0);
	}
}
