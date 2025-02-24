#include "main.h"
/**
*print_diagonal - Draws a diagonal line on the terminal
*
*@n: The number of times the character \ should be printed
*
*Description: This function prints a diagonal line using backslashes
*
*and spaces. If n is 0 or less, it only prints a newline.
*/
void print_diagonal(int n)
	{
		int i;
		if (n > 0)
			{
				for (i = 0; i < n; i++)
					{
						_putchar('\');
						}
						}
		_putchar('\n');
		}
