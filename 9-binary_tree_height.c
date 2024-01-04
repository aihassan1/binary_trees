#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree, or -1 if @tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{

		/* left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0; */

		if (tree->left)
		{
			left_height = binary_tree_height(tree->left) + 1;
		}
		else
		{
			left_height = 0;
		}

		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (left_height > right_height)
		{

			return (left_height);
		}
		else
		{

			return (right_height);
		}
	}
}
