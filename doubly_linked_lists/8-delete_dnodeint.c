#include "lists.h"
/**
* 
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }
}
