/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** pop_back.c
*/

#include "include/list.h"

/**
 * @brief Remove the last node from the list and return its data.
 *
 * @param list The linked list from which the node will be removed.
 * @return The data of the removed node for the user to free, NULL if the list
 * is empty.
 */
void *pop_back(list_t *list)
{
    node_t *current = list->head;
    node_t *prev = NULL;
    void *data = NULL;

    if (list == NULL || list->head == NULL)
        return NULL;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    data = current->data;
    free(current);
    if (prev != NULL)
        prev->next = NULL;
    else
        list->head = NULL;
    list->size--;
    return data;
}
