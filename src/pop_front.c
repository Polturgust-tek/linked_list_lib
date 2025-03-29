/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** pop_front.c
*/

#include "include/list.h"

/**
 * @brief Remove the first node from the list and return its data.
 *
 * @param list The linked list from which the node will be removed.
 * @return The data of the removed node for the user to free, NULL if the list
 * is empty.
 */
void *pop_front(list_t *list)
{
    node_t *temp = NULL;
    void *data = NULL;

    if (list == NULL || list->head == NULL)
        return NULL;
    temp = list->head;
    data = temp->data;
    list->head = temp->next;
    free(temp);
    list->size--;
    return data;
}
