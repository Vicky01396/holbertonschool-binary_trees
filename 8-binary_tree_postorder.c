#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree using a preorder path
 * @tree: pointer to the root node of the tree to be traversed
 * @func: pointer to a function to call for each node 
 * Return: Always 0 (Success)
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
            return;
    
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}