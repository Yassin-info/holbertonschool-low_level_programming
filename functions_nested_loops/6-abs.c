#include "main.h"
/**
* _abs - Computes the absolute value of an integer
* @n: The integer to check
*
* Return: The absolute value of n
*/
int _abs(int n)
{
if (n < 0)
return -n;  // Return the negation if n is negative
else
return n;   // Return n if it is already positive or zero
}