/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** push_back.c
*/

#include "include/list.h"

/**
 * @brief Add a new node with the given data at the end of the list.
 *
 * @param list The linked list to which the node will be added.
 * @param data The data to be stored in the new node.
 */
void push_back(list_t *list_t, void *data)
{
    node_t *new_node = create_node(data);
    node_t *current = list_t->head;

    if (new_node == NULL)
        return;
    if (current == NULL)
        list_t->head = new_node;
    else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
    list_t->size++;
}
