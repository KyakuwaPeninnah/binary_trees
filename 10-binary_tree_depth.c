#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_depth - calculates the height of a node in a tree
* @tree: pointer
* Return: depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0, D = 0;

	if (tree == NULL)
	return (0);

	if (tree->parent)
	{
		d = binary_tree_depth(tree->parent) + 1;
		D = binary_tree_depth(tree->parent) + 1;
	}

	if (d > D)
		return (d);
	else
		return (D);
}
