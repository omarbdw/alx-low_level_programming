#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->prev = NULL;
newNode->next = *head;
if (*head != NULL)
(*head)->prev = newNode;
*head = newNode;
return (newNode);
}
