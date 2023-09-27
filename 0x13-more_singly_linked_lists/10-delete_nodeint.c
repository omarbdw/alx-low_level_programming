#include "lists.h"
/**
 * delete_nodeint_at_index - deletes certain node
 * @head: double pointer to head
 * @index: index at which node will be deleted
 * Return: 1 if ok & -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

unsigned int position = 0;
listint_t *temp = NULL;
listint_t *current = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(current);
current = NULL;
return (1);
}
while (position < (index - 1))
{
if (current == NULL || (current->next) == NULL)
return (-1);
current = current->next;
position++;
}

temp = current->next;
current->next = temp->next;
free(temp);
temp = NULL;
return (1);
}
