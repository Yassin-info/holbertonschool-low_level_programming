#include "variadic_functions.h"
/**

*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
     unsigned int i;
    for (i = 0; i < n; i++)
    {
        printf ("%d separator \n", i);
    }
    if (separator != NULL)
    i++;

    else
    printf (" ");

    putchar ("\n");
}
