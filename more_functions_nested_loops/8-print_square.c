#include "main.h"
#include <stdio.h>
/**
*print_square - Prints a square, followed by a new line
*
*@size: The size of the square
*
*Description: This function prints a square using '#' characters.
*
*If size is 0 or less, it only prints a newline.
*/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
