#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: Pointer to a string of 0 and 1 chars
*
* Return: The converted number, or 0 if invalid input
*/
{
unsigned int result = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
result = result * 2 + (b[i] - '0');
}
return (result);
}
