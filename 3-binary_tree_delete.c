#include "binary_trees.h"

/**
 * binary_tree_delete - del the binary tree
 * @tree: pointer to a tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if(tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
