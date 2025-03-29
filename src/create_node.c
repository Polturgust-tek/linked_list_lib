/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** create_node.c
*/

#include "include/list.h"

/**
 * @brief Create a new node with the given data.
 *
 * @param data The data to be stored in the node (often another structure).
 * @return A pointer to the newly created node, NULL if allocation fails.
 */
node_t *create_node(void *data)
{
    node_t *node_t = malloc(sizeof(node_t));

    if (node_t == NULL)
        return NULL;
    node_t->data = data;
    node_t->next = NULL;
    return node_t;
}
