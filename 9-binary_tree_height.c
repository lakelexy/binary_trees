#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: The size of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;
	if(tree == NULL)
		return(0);
	else{
		lheight = binary_tree_height(tree->left);
		rheight = binary_tree_height(tree->right);
		if(lheight >= rheight)
			return(1 + lheight);
		else{
			return(1 + rheight);
		}
	}
}
