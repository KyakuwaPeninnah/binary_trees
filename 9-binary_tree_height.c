#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer
 * Return: the size or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);

	count = tree_height(tree);

	return ((size_t)count);
}

/**
 * tree_height - count node tree height
 * @node: pointer
 * Return: height
 */

int tree_height(const binary_tree_t *node)
{
	int depth, Depth;

	if (node == NULL)
		return (-1);

	depth = tree_height(node->left);
	Depth = tree_height(node->right);

	if (depth > Depth)
		return (depth + 1);
	else
		return (Depth + 1);
}
