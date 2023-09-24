#include "lists.h"
#include <string.h>
/*
* adds a new node at the beginning of a list_t list
* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    int i;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    new_node->str = strdup(str);

    for (i = 0; str[i] != '\0'; i++)
        ;
    new_node->len = i;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}