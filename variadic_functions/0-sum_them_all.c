#include "variadic_functions.h"
/**
* sum_them_all - Calculates the sum of all its parameters
* @n: The number of parameters passed to the function
* @...: A variable number of integers to sum
* Description:
* This function uses stdarg.h macros to iterate through variadic arguments.
* If n is 0, returns 0 immediately as there are no values to add.
* Return:
* When n == 0: 0
* Otherwise: Sum of all provided parameters (n determines how many are read)
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
