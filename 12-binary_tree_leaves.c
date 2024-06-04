#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer
 * Return: 0 if tree is null or the count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count, counter;

	if (tree == NULL)
		return (0);

	count = binary_tree_leaves(tree->left);
	counter = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (count + counter);
}
