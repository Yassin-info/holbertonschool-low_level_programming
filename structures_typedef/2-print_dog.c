#include "dog.h"
#include <stdio.h>
/**
* print_dog - Prints dog info
* @d: Pointer to dog
*/
void print_dog(struct dog *d)
{
    if (d == NULL)
    return;

    if (d->name = NULL)
    printf ("Name: (nil)");
    
    else
    printf ("Mame: %s", d->name);
}
