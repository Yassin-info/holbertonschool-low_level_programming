#include "main.h"
/**
* puts_half - prints half of a string
* @str: the string to print
*/
void puts_half(char *str)
{
int length = 0;
int start;
/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}
/* Calculate the starting point for printing */
start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;
/* Print the second half of the string */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
