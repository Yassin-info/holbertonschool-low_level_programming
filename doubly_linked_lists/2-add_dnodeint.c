#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of the list
* @head: pointer to a pointer to the head of the list
* @n: integer value to be stored in the new node
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *n;

    n = malloc(sizeof(dlistint_t));
    if (n == NULL)
        return (NULL);

    n->n = a;
    n->prev = NULL;
    n->next = *head;

    if (*head != NULL)
        (*head)->prev = n;
    *head = n;
    return (n);
}
