#include "binary_trees.h"
/**
* binary_tree_depth - finds depth of a node
* @tree: the node to check
* Return: depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
