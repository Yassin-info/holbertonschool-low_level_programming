#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * copy_string - Allocates memory and copies a string
 * @str: The string to copy
 * Return: Pointer to the new string, or NULL if it fails
 */
char *copy_string(char *str)
{
	char *n;
	int i, len = 0;

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
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog_t, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	
	new_dog->name = copy_string(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = copy_string(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
