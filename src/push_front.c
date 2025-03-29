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
void push_front(List *list, void *data)
{
    Node *new_node = create_node(data);
    if (new_node == NULL)
        return;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}
