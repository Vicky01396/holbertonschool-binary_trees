#include "binary_trees.h"

/**
 * binary_tree_is_leaf - cheks if a node is a leaf
 * @node: node to be checked
 * Return: 0 if is not a leaf, 1 if it is
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
            return (0);

    if (!node->left && !node->right)
            return (1);

    return (0);
}