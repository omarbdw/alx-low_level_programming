#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *currentNde;
dlistint_t *nextNode;
if (head)
{
currentNde = head;
nextNode = head->next;
while (nextNode)
{
free(currentNde);
currentNde = nextNode;
nextNode = nextNode->next;
}
free(currentNde);
}
}
