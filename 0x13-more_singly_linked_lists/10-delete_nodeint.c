#include "lists.h"
/**
 *
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int counter = 0;
    listint_t *node;
    listint_t *temp = malloc(sizeof(listint_t));
    temp = *head;
    if (!temp)
        return (-1);

    while (temp)
    {
        if (index == counter)
        {
            
            temp = node->next;
            free(node);
            return (1);
        }
        else
        {
            temp = temp->next;
            counter++;
        }
    }
    return (-1);
}
