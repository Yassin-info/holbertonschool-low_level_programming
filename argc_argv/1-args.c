#include <stdio.h>
/**
* main - prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector (unused in this program)
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argv; /* Unused parameter */
printf("%d\n", argc - 1);
return (0);
}
