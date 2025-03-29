/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** push_front.c
*/

#include "include/list.h"

/**
 * @brief Add a new node with the given data at the front of the list.
 *
 * @param list The linked list to which the node will be added.
 * @param data The data to be stored in the new node.
 */
void push_front(list_t *list_t, void *data)
{
    node_t *new_node = create_node(data);

    if (new_node == NULL)
        return;
    new_node->next = list_t->head;
    list_t->head = new_node;
    list_t->size++;
}
