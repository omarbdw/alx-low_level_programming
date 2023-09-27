#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index of the list where the new node should be added
 * @n: value added
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index
 * idx, do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp;
listint_t *node;
unsigned int counter = 0;

node = malloc(sizeof(listint_t));
if (node == NULL || head == NULL)
return (NULL);
node->n = n;
node->next = NULL;

temp = *head;

if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}

while (temp)
{

if ((counter + 1) == idx)
{
node->next = temp->next;
temp->next = node;
return (node);
}
temp = temp->next;
counter++;
}
return (NULL);
}
