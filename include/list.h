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

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    int size;
} List;

List* create_list(void);
Node* create_node(void *data);
void free_list(List *list);
void push_back(List *list, void *data);
void push_front(List *list, void *data);


#endif /* LINKED_LIST_H */
