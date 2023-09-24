#include "lists.h"
#include <string.h>
/* 
* add_node - adds a new node at the beginning of a list_t list
    * @head: pointer to the head of the list
    * @str: string to be added to the list
    * Return: address of the new element or NULL if it failed
    * Description: adds a new node at the beginning of a list_t list
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node; /* create a new node */
int i; /* counter for the number of characters */
new_node = malloc(sizeof(list_t)); /* allocate memory for the new node */
if (new_node == NULL) /* validate memory allocation */
return (NULL); /* return NULL if malloc fails */
new_node->str = strdup(str); /* copy the string into the new node */
for (i = 0; str[i] != '\0'; i++); /* count the number of characters */
new_node->len = i; /* i is the number of characters */
new_node->next = *head; /* the new node points to the old head */
*head = new_node; /* the new node is now the head */
return (new_node); /* return the new node */
} 