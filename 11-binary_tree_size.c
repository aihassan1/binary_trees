#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Size of the tree, or 0 if @tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t Left_Size_Counter = 0;
	size_t Right_Size_Counter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Recursively calculate the size of the left and right subtrees */
	Left_Size_Counter = (binary_tree_size(tree->left));
	Right_Size_Counter = (binary_tree_size(tree->right));

	/**
	 * Return total size of the tree
	 * (1 for the root + left size + right size)
	 */
	return (Left_Size_Counter + Right_Size_Counter + 1);
}
