/*
** EPITECH PROJECT, 2024
** linked_list_lib
** File description:
** list.h
*/

#ifndef LINKED_LIST_H
    #define LINKED_LIST_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

typedef struct node {
    void *data;
    struct node_t *next;
} node_t;

typedef struct list {
    node_t *head;
    int size;
} list_t;

list_t* create_list(void);
node_t* create_node(void *data);
void free_list(list_t *list_t);
void push_back(list_t *list_t, void *data);
void push_front(list_t *list_t, void *data);
int insert_at(list_t *list_t, int index, void *data);


#endif /* LINKED_LIST_H */
