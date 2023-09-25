#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: integer to be added at the begining
 * Return: new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newHead = malloc(sizeof(listint_t));
if (newHead == NULL)
return (NULL);
newHead->n = n;
newHead->next = *head;
*head = newHead;
return (newHead);
}
