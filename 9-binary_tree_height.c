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
	int left_height, right_height = 0;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	/*printf("left = %d, right= %d\n", left_height, right_height);*/

	if (left_height > right_height)
	{

		return (left_height + 1);
	}
	else
	{

		return (right_height + 1);
	}
}
