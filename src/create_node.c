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
Node *create_node(void *data)
{
    Node *node = malloc(sizeof(Node));
    if (node == NULL)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}
