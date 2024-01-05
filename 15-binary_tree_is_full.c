#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_path, right_path;
	/* An empty tree is considered full */
	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		if (tree->left && tree->right)
		{
			left_path = binary_tree_is_full(tree->left);
			right_path = binary_tree_is_full(tree->right);

			if (left_path == 0 || right_path == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
	}
	return (0);
}
