#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers -  prints numbers, followed by a new line
* @separator: string to be printed between numbers (space)
* @n: number of integers passed to the function
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar(10);
	va_end(args);
}
