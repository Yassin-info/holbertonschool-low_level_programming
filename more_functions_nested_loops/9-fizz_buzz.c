#include "main.h"
#include <stdio.h>
/**
* main - Prints the numbers from 1 to 100, replacing multiples of 3 with Fizz,
*multiples of 5 with Buzz, and multiples of both 3 and 5 with FizzBuzz.
*
* Return: Always 0.
*/
int main(void);
{
	int i;
	for (i = 1; i <= 100; i++)
		{
			if (3 % 100)
			printf("%d Fizz")
			else if (5 % 100)
			printf("%d Buzz")
			else if (3 % 100, 5 % 100)
			printf("%d FizzBuzz")
			}
	return (0)
}
