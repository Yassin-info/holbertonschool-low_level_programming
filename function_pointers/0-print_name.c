#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - Prints a name using a given function
* @name: Name to be printed
* @f: Function pointer to the printing function
*
* Description: This function takes a name and a function pointer as parameters.
* It calls the function pointed to by f, passing the name as an argument.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
