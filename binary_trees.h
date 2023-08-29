#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

#include "binary_trees.c"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
