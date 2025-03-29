/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** free_list.c
*/

#include "include/list.h"

/**
 * @brief Free the entire linked list and its nodes.
 *
 * /!\ This function frees all nodes and the list itself.
 * But it does not free the data stored in the nodes.
 *
 * @param list The linked list to be freed.
 */
void free_list(list_t *list)
{
    node_t *current = list->head;
    node_t *next_node;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    free(list);
}
