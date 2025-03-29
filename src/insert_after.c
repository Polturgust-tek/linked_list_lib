/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** insert_after.c
*/

#include "include/list.h"


/**
 * @brief Insert a new node with the given data after the specified node in the
 *          list.
 *
 * @param node The node after which the new node will be inserted.
 * @param data The data to be stored in the new node.
 * @return 0 on success, -1 on failure.
 */
int insert_after(node_t *node, void *data)
{
    node_t *new_node = create_node(data);

    if (new_node == NULL)
        return -1;
    new_node->next = node->next;
    node->next = new_node;
    return 0;
}
