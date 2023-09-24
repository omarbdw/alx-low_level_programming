/**
 * free_list - Frees a linked list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
#include "lists.h"
#include <stdlib.h>
void free_list(list_t *head)
{
list_t *p, *store;
p = head;
while (p != NULL)
{
store = p->next;
free(p->str);
free(p);
p = store;
}
}
