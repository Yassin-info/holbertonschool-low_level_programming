#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_name_as_is - prints a name as is
* @name: name of the person
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
    {
        f(name);
    }
}
