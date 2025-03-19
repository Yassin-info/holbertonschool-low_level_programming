#include "variadic_functions.h"
/** 
* print_strings - Prints strings followed by a new line
* @separator: String to be printed between the strings
* @n: Number of strings passed to the function
* @...: Variable number of strings to be printed
* Description: This function prints a variable number of strings,
* separated by the given separator string. If a string is NULL,
* it prints (nil) instead. A new line is printed at the end.
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
			if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}

