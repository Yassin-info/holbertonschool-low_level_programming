#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *array_range - function that creates an array of integers.
* @min: array[0]
* @max: array[NULL - 1]
* Return: array
*/

int *array_range(int min, int max)
{

int *y;
int l;
int i;

if (min > max)
return (NULL);


y = malloc((max - min + 1) * sizeof(int));
if (y == NULL)
return (NULL);

for (l = min, i = 0; l <= max; l++, i++)
{
y[i] = l;
}

return (y);
}
