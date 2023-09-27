#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node node at a given position
 * @head: head of list
 * @idx: index of the list where the node node should be added
 * @n: value added
 * Return: the address of the node node, or NULL if it failed
 * if it is not possible to add the node node at index
 * idx, do not add the node node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int counter;
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL; ///////////

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (counter = 0; temp && counter < idx; counter++)
	{
		if (counter == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
