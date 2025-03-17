#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_name_as_is - prints a name as is
* @name: name of the person
* @f: Pointer to the printing function to use
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
