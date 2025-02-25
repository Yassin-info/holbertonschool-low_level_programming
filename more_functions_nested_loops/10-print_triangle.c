#include "main.h"
/**
* print_triangle - Prints a triangle of '#' characters
* @size: The size of the triangle
*
* Description: If size is 0 or less, only prints a newline.
*/
void print_triangle(int size)
{
int row, col, space;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
_putchar(' ');
for (col = 1; col <= row; col++)
_putchar('#');
_putchar('\n');
}
}
