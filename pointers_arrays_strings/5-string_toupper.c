#include "main.h"
#include <ctype.h>
/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @s: pointer to the string to be modified.
*
* Return: the pointer to the modified string.
*/
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
}
}
return (s);
}
