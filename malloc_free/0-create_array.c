#include <stdlib.h>
/**
* create_array - crée un tableau de caractères et l'initialise avec un caractère spécifique
* @size: la taille du tableau à créer
* @c: le caractère avec lequel initialiser le tableau
*
* Return: Un pointeur vers le tableau, ou NULL si ça échoue ou si size est 0
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
