#include "variadic_functions.h"

/**
* print_all - Prints arguments of various types
* @format: String with argument types
*/
void print_all(const char * const format, ...)
{
    va_list args;
	unsigned int i = 0;
	char *s;
	int printed = 0;

	va_start(args, format);
    switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			
            case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
            
            case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			
            case 's':
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				printed = 1;
				break;
			
                default:
				break;
                }
		i++;
	}
	printf("\n");
	va_end(args);
}
