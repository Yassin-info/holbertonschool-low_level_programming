#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be searched.
* @accept: The string containing the characters to match.
*
* Return: The number of bytes in the initial segment of s
*         that consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p;
while (*s)
{
p = accept;
while (*p)
{
if (*s == *p)
{
count ++;
break;
}
p++;
}
if (*p == '\0')
{
break;
}
s++;
}
return (count);
}
