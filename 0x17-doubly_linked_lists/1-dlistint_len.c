#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Head of the doubly linked list.
 * Return: The number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
int len = 0;
while (h)
{
h = h->next;
len++;
}
return (len);
}
