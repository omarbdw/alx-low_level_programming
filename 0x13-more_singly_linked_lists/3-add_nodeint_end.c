#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Integer value to be stored in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *newNode;
temp = *head;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;

if (!*head)
{
*head = newNode;
return (newNode);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
return (newNode);
}
