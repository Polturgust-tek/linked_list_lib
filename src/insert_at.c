/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** insert_at.c
*/

#include "include/list.h"


int check_errors(node_t *new_node, list_t *list_t, int index)
{
    if (new_node == NULL)
        return -1;
    if (index < 0 || index > list_t->size) {
        free(new_node);
        return -1;
    }
    return 0;
}

/**
 * @brief Insert a new node with the given data at the specified index in the
 *          list.
 *
 * @param list The linked list where the node will be inserted.
 * @param index The index at which to insert the new node (0-based).
 * @param data The data to be stored in the new node.
 * @return 0 on success, -1 on failure.
 */
int insert_at(list_t *list, int index, void *data)
{
    node_t *new_node = create_node(data);
    node_t *current = list->head;
    node_t *prev = NULL;

    if (check_errors(new_node, list, index) == -1)
        return -1;
    if (index == 0) {
        new_node->next = list->head;
        list->head = new_node;
    } else {
        for (int i = 0; i < index; i++) {
            prev = current;
            current = current->next;
        }
        prev->next = new_node;
        new_node->next = current;
    }
    list->size++;
    return 0;
}
