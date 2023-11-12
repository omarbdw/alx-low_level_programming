#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *prevNode = *head;
dlistint_t *nodeToDelete = *head;
unsigned int prevIndex;
unsigned int count = 0;

if (!(*head))
return (-1);
if (index == 0)
{
*head = nodeToDelete->next;
free(nodeToDelete);
if (*head)
(*head)->prev = NULL;
return (1);
}
prevIndex = index - 1;
while (prevNode && count != prevIndex)
{
count++;
prevNode = prevNode->next;
}
if (count == prevIndex && prevNode)
{
nodeToDelete = prevNode->next;
if (nodeToDelete->next)
nodeToDelete->next->prev = prevNode;
prevNode->next = nodeToDelete->next;
free(nodeToDelete);
return (1);
}
return (-1);
}