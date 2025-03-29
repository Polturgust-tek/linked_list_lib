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
list_t* create_list(void)
{
    list_t *list_t = malloc(sizeof(list_t));

    if (list_t == NULL)
        return NULL;
    list_t->head = NULL;
    list_t->size = 0;
    return list_t;
}
