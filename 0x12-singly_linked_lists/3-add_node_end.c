

#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list_t list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

while (str[len])
len++;

new_node->str = strdup(str); /* string duplication */
new_node->len = len; /* length of string */
new_node->next = NULL; /* new node always points to NULL */

if (*head == NULL) /* if list is empty, new node becomes head */
{
*head = new_node; /* dereference head to assign new node */
return (*head); /* return address of new node */
}

temp = *head; /* assign temp to head to traverse list */
while (temp->next != NULL) /* traverse list until last node */
temp = temp->next; /* assign temp to next node */

temp->next = new_node; /* last node points to new node */

return (new_node);
}
