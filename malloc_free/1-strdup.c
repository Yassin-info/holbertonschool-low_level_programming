#include <stdlib.h>
/**
* _strdup - Duplicates a string
* @str: The string to duplicate
*
* Return: A pointer to the newly duplicated string, or NULL if str is NULL or if memory allocation fails
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0
if (str == NULL)
return (NULL);
/* Calculate the length of the string */
while (str[len])
len++;
/* Allocate memory for the new string (length + 1 for the null terminator) */
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
/* Copy the string */
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
