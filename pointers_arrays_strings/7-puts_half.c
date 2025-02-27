#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of the string
 * @str: String
 */
void puts_half(char *str)
{
	int i, n;
	int s_size = _strlen(str);

	if (s_size % 2 == 0)
		n = s_size / 2;
	else
		n = (s_size + 1) / 2;

	for (i = n; i != s_size; i++)
	{
		if (i >= n)
			_putchar(str[i]);
	}
	_putchar('\n');
}
