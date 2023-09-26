#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 * Return: nothhing
 */
void free_listint(listint_t *head)
{
listint_t *temp = head;
while (temp != NULL)
{
temp->next = head->next;
free(head);
head = temp;
}
}
