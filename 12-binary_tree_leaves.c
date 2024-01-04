#include "binary_trees.h"
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
        return (counter + 1);
    }
    return (0);
}
