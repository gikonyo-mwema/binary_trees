#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointe to the root node of the tree  to measure the height
*
* Return: height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_left = 0;
size_t height_right = 0;

if (tree == NULL)
return (0);

if (tree->left)
height_right = 1 + binary_tree_height(tree->left);

if (tree->right)
height_right = 1 + binary_tree_height(tree->right);

if (height_left > height_right)
return (height_left);
else
return (height_right);
}
