#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* main - point d'entrée du programme
*
* Return: toujours 0
*/
int main(void)
{
list_t *head;
head = NULL;
/* Test de add_node */
printf("Ajout de nœuds au début de la liste :\n");
add_node(&head, "Python");
add_node(&head, "C");
add_node(&head, "JavaScript");
print_list(head);
printf("\nNombre d'éléments : %lu\n", list_len(head));
/* Test de add_node_end */
printf("\nAjout de nœuds à la fin de la liste :\n");
add_node_end(&head, "Ruby");
add_node_end(&head, "PHP");
print_list(head);
printf("\nNombre d'éléments : %lu\n", list_len(head));
/* Libération de la mémoire */
printf("\nLibération de la mémoire...\n");
free_list(head);
printf("Mémoire libérée.\n");
return (0);
}
