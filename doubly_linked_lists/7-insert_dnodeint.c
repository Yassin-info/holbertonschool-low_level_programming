#include "lists.h"
/**
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (h == NULL)
        return (NULL);
    if (idx == 0)
        return (add_dnodeint(h, n));
    current = *h;
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;
    if (current == NULL)
        return (NULL);
}
