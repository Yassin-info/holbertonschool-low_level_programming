#include "main.h"
/**
* main - Vérifie le code.
*
* Return: Toujours 0.
*/
int main(void)
{
int r;
r = print_sign(98);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');    
r = print_sign(0xff); // Cela correspond à 255 en décimal
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');    
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
