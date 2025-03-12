#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - Concatenates two strings
* @s1: First string
* @s2: Second string
* @n: Number of bytes from s2 to concatenate
* Return: Pointer to newly allocated space with s1 + first n bytes of s2
* NULL if allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s_s1 = 0, i = 0;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[s_s1] != '\0')
s_s1++;
ptr = malloc(sizeof(char) * (s_s1 + n + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < s_s1; i++)
ptr[i] = s1[i];
for (i = 0; i < n; i++)
ptr[s_s1 + i] = s2[i];
ptr[s_s1 + n] = '\0';
return (ptr);
}
