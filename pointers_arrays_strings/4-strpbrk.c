#include "main.h"
#include <stddef.h>
/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to search.
* @accept: The string containing the set of bytes to match.
*
* Return: A pointer to the byte in s that matches one of the bytes in accept,
*         or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
