#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: a pointer to the list of data type listint_t
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t length = 0;
while (h)
{
h = h->next;
length++;
}
return (length);
}
