#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Value to be added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *temp = *head;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (temp != NULL)
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
newNode->prev = temp;
}
else
{
*head = newNode;
newNode->prev = NULL;
}
return (newNode);
}
