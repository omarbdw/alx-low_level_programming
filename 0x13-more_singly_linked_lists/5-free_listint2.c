#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: head of list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (temp != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
head = NULL;
}
