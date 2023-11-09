#include "lists.h"
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