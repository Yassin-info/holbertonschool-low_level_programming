#ifndef DOG_H
#define DOG_H
/**
* struct dog - Structure représentant un chien
* @name: Nom du chien
* @age: Âge du chien
* @owner: Nom du propriétaire du chien
*
* Description: Cette structure contient les informations de base d'un chien
*/
struct dog
{
char *name;
float age;
char *owner;
};
/* Typedef pour struct dog */
typedef struct dog dog_t;
/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void free_dog(dog_t *d);
#endif /* DOG_H */
