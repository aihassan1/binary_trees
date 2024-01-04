#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: Depth of the node, or 0 if @tree is NULL or it has no parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* Check if the tree or its parent is NULL */
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	/* Recursively calculate the depth of the parent node */
	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
