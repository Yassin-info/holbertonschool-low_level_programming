#include "lists.h"
/**
* main - Entry point for testing linked list functions
*
* Return: Always 0 (Success)
*/
int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Holberton");
    add_node(&head, "School");
    add_node_end(&head, "Welcome");

    printf("List contains:\n");
    print_list(head);

    printf("List length: %lu\n", list_len(head));
    free_list(head);

    return (0);
}
