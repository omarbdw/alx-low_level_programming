#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node;
node = head;
while (node)
{
if (i == index)
{
return (node);
}
else
{
node = node->next;
i++;
}
}
if (node == NULL)
return (NULL);
else
return (node);
}
