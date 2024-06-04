#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer
 * Return: tree is NULL, the function will return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count, counter;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left);
	counter = binary_tree_size(tree->right);

	return (count + counter + 1);
}
