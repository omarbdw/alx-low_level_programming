#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h;
dlistint_t *newNode;
unsigned int index, cont = 0;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (idx == 0)
{
newNode->prev = NULL;
newNode->next = *h;
if (*h)
(*h)->prev = newNode;
*h = newNode;
return (*h);
}
index = idx - 1;
while (temp && cont != index)
{
cont++;
temp = temp->next;
}
if (cont == index && temp)
{
newNode->prev = temp;
newNode->next = temp->next;
if (temp->next)
temp->next->prev = newNode;
temp->next = newNode;
return (newNode);
}
free(newNode);
return (NULL);
}
