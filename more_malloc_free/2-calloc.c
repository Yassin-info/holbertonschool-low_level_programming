#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_calloc - function that allocates memory for an array, using malloc.
* @nmemb: taille du tableau
* @size: taille octets
* Return: array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *c;

if (nmemb == 0 || size == 0)
return (NULL);

c = malloc(nmemb * size);

if (c == NULL)

}
return (NULL);
