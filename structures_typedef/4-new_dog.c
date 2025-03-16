#include "dog.h"
#include <stdio.h>
/**
 * copy_string - Allocates memory and copies a string
 * @str: The string to copy
 * Return: Pointer to the new string, or NULL if it fails
 */
char *copy_string(char *str)
{
	char *n;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	n = malloc(len + 1);
	if (n == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		n[i] = str[i];

	n[len] = '\0';
	return (n);
}
