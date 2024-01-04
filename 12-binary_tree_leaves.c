#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of leaves in the tree, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		counter++;
	}
	return (counter + 1);
}
