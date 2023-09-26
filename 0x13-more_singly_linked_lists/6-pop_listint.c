#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head: head of the list
 *Return: returns the head node’s data (n)
 *& if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int value;
if (*head == NULL || head == NULL)
return (0);
value = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (value);
}
