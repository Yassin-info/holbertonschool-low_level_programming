#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* malloc_checked - Allocates memory using malloc
* @b: Number of bytes to allocate
*
* Return: Pointer to allocated memory
* Description: Exits with status 98 if allocation fails
*/
void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
