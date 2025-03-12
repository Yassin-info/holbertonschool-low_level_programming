#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *str_concat - function that concatenates two strings
* @s1: pointer to BEST
* @s2: pointer to School
* Return: s3 or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
int i, j;
char *s3;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
{

}

for (j = 0; s2[j] != '\0'; j++)
{

}

s3 = malloc((i + j + 1) * sizeof(char));

if (s3 == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}

for (j = 0; s2[j] != '\0'; j++, i++)
{
s3[i] = s2[j];
}
s3[i] = '\0';

return (s3);
}
