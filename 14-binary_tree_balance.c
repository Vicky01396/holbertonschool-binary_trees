#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: is a pointer to the root node of
 * the tree to measure the balance factor
 * Return:  balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

    if (!tree)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t right = 0, left = 0;

    if (!tree)
        return (0);

    right = binary_tree_height(tree->right);
    left = binary_tree_height(tree->left);

    if (right <= left)
        return (left + 1);

    else
        return (right + 1);

}