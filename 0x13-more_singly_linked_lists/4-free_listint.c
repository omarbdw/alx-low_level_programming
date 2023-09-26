#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 * Return: nothhing
 */
void free_listint(listint_t *head)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
while (temp->next != NULL)
{
temp->next = head->next;
free(head);
head = temp;
}
free(temp);
}
