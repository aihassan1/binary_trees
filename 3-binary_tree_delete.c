#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @tree: Pointer to the root node of the tree to be deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*If tree is NULL, do nothing*/
	if (tree != NULL)
	{

		/*delete the left side*/
		binary_tree_delete(tree->left);

		/*delete the right side*/
		binary_tree_delete(tree->right);

		/*delete the root node */

		free(tree);
	}
}
