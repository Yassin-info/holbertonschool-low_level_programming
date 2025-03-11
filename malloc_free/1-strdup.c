#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
* _strdup: function that return a pointer to a newly allocated space in memory
* @str: pointer to a new string which is a duplicate of the string
* Return: NULL if str = NULL, a pointer to the duplicate string.
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
