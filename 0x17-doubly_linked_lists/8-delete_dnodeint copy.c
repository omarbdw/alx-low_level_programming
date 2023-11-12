#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *nodeToDelete = *head;
    dlistint_t *nextNode = *head;
    unsigned int counter = 0;
    if (!*head)
        return (-1);
    if (index == 0)
    {
        free(nodeToDelete);
        return (1);
    }
    while (nodeToDelete && counter < index)
    {
        if (counter == (index - 1))
        {
            if (!nextNode)
                nodeToDelete->prev->next = NULL;
            else
                nodeToDelete->prev->next = nodeToDelete->next;
            nextNode->prev = nodeToDelete->prev;
            free(nodeToDelete);
        }
        counter++;
        nodeToDelete = nodeToDelete->next;
        nextNode = nodeToDelete->next;
    }
    return (1);
}