#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) of the dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *newNode = head;
int sum = 0;
while (newNode)
{
sum += newNode->n;
newNode = newNode->next;
}
return (sum);
}
