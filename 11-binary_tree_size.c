#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of @tree
 * @tree: pointer to node to measure
 * Return: size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt = 0, rt = 0;

	if (!tree)
		return (0);

	lt += binary_tree_size(tree->left);
	rt += binary_tree_size(tree->right);
	return (lt + rt + 1);
}