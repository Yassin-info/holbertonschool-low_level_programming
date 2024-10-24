#include "main.h"
/**
* test_isalpha - Tests the _isalpha function
*/
void test_isalpha(void)
{
int r;
r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108); // ASCII for 'l'
_putchar(r + '0');
r = _isalpha(';'); // Not an alphabetic character
_putchar(r + '0');
_putchar('\n');
}
