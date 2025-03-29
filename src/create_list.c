/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** create_list
*/

#include "include/list.h"

/**
 * @brief Create a new linked list.
 *
 * @return A pointer to the newly created list, NULL if allocation fails.
 *         The list is initialized with size 0 and head set to NULL.
 */
List* create_list(void)
{
    List *list = malloc(sizeof(List));
    if (list == NULL)
        return NULL;
    list->head = NULL;
    list->size = 0;
    return list;
}
