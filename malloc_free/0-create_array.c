#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Creates an array of chars and initializes it with a specific
* @size: The size of the array.
* @c: The character to initialize the array with.
*
* Return: A pointer to the array, or NULL if size = 0 or memory allocation
*/
char *create_array(unsigned int size, char c)
{

char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
