#include <stdio.h>
/**
* main - Imprime le nombre d'arguments
* @argc: Nombre d'arguments
* @argv: Tableau d'arguments
* Return: Toujours 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
