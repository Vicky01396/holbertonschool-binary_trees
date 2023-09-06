#include "binary_trees.h"

/**
 * binary_balance - meassures the height of a binary tree.
 * @tree: pointer to the tree's root node.
 * Return:height.
 */
size_t binary_balance(const binary_tree_t *tree)
{
    size_t lh = 0, rh = 0;

    if (!tree)
        return (0);

    lh = tree->left ? 1 + binary_balance(tree->left) : +1;
    rh = tree->right ? 1 + binary_balance(tree->right) : +1;

    return ((lh > rh) ? lh : rh);

}

/**
 * balance - measures the balance of a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: balance factor.
 */
int balance(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    return (binary_balance(tree->left) - binary_balance(tree->right));
}

/**
 * tree_is_perfect - complementary of binary_tree_is_perfect.
 * @tree: pointer to the tree's first node.
 * Return: 1 if it is perfect.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
    size_t lh = 0, rh = 0;

    if (!tree->left && !tree->right)
        return (1);

    if (tree->left && tree->right)
    {
        lh = 1 + tree_is_perfect(tree->left);
        rh = 1 + tree_is_perfect(tree->right);
        if (rh == lh && lh && !balance(tree))
            return (1);
    }

    return (0);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect.
 * @tree: pointer to the first node of the tree.
 * Return: 1 if it is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (tree_is_perfect(tree))
        return (1);

    return (0);
}