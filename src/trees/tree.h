#ifndef TREE_H
#define TREE_H

typedef struct binary_tree_node {
    int value;
    binary_tree_node_t* left;
    binary_tree_node_t* right;
} binary_tree_node_t;

typedef struct binary_tree {
    binary_tree_node_t root;
} binary_tree_t;



#endif
