#include <stdlib.h>

/**
* binary_tree_node - binary_trees
* @parent: node parent
* @value: the node
* Return: the node
*/
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));

if (node == NULL)
return (NULL);

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;

return (node);
}
