#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
* *_strdup - Returns a pointer to a newly allocated space in memory
*           containing a duplicate of the string passed as a parameter.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL if str is NULL
*         or if memory allocation fails.
*/
char *_strdup(char *str)
{
int size = 0, i;
char *s;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = str[i];
}
return (s);
}
