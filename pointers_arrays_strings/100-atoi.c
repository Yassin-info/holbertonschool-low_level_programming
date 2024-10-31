#include "main.h"
/**
* _strcpy - Copies the string pointed to by src to dest
* @dest: Pointer to the destination buffer
* @src: Pointer to the source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
1:15
#include "main.h"
/**
* _atoi - Converts a string to an integer
* @s: The string to convert
*
* Return: The integer value of the converted string
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10 ||
(result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
