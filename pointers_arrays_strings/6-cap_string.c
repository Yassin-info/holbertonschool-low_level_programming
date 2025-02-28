#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
*
* @s: Pointer to the string to be capitalized.
*
* Return: The pointer to the modified string.
*/
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;
	while (s[i] != '\0')
		{
			if (capitalize && (s[i] >= 'a' && s[i] <= 'z'))
				{
					s[i] = s[i] - 'a' + 'A';
					capitalize = 0;
					}
			else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
					s[i] == ',' || s[i] == ';' || s[i] == '.' ||
					s[i] == '!' || s[i] == '?' || s[i] == '\"' ||
					s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
				{
					capitalize = 1;
					}
			else
				{
					if (s[i] >= 'A' && s[i] <= 'Z')
						{
							capitalize = 0;
							}
					}
			i++;
			}
	return (s);
}
