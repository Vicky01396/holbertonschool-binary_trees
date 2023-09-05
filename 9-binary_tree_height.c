#include "binary_trees.h"

/**
 * binary_tree_height - meassures the height of a binary tree
 * @tree: pointer to the tree's root node
 * Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (right >= left)
		return (right + 1);

	else
		return (left + 1);

}