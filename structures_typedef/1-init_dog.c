#include "dog.h"
#include <stdio.h>

/**
* init_dog - function that initializes a variable of type struct dog
* struct dog - structure containing 3 pieces of information
* @d: pointer to struct dog receiving the address of my_dog
* @name: pointer to a char
* @age: floating-point number
* @owner: pointer to a char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
