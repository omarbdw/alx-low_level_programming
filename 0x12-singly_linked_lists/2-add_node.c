#include "lists.h"
#include <string.h>
/*
* adds a new node at the beginning of a list_t list
* Prototype: list_t *add_node(list_t **head, const char *str);
* Return: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup
*/
/*
* 1. Create a new node
* 2. Set the new node's str to the string passed in
* 3. Set the new node's len to the length of the string
* 4. Set the new node's next to the current head
* 5. Set the head to the new node
* 6. Return the new node
*/
 /*
 * add_node - adds a new node at the beginning of a list_t list
    * @head: pointer to the head of the list
    * @str: string to be added to the list
    * Return: address of the new element or NULL if it failed
    * Description: adds a new node at the beginning of a list_t list
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