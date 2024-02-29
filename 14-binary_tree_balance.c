#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_left = 0;
size_t height_right = 0;

if (tree == NULL)
return (0);

if (tree->left)
height_left = 1 + binary_tree_height(tree->left);

if (tree->right)
height_right = 1 + binary_tree_height(tree->right);

if (height_left > height_right)
return (height_left);
else
return (height_right);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Return: balance factor of the tree. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int height_left = 0;
int height_right = 0;

if (tree == NULL)
return (0);

height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);

return (height_left - height_right);
}
