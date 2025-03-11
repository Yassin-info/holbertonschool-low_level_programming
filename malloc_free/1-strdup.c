#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
* _strdup - function that returns a pointer to a newly allocated space in memory
* @str: pointer to a new string which is a duplicate of the string
* Return: NULL if str = NULL, a pointer to the duplicate string.
*/
char *_strdup(char *str)
{
char *s;
if (str = NULL)
return (NULL);
int i = 0;
while (str[i] != '\0')
{
i++;
}
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = str[i];
}
return (s);
}
