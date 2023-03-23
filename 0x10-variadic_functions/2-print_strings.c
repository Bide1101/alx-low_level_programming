#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings -  prints strings, followed by a new line
* @separator: string to be printed between the strings (space)
* @n: number of strings passed to the function
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s = NULL;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (s != NULL)
		{
			printf("%s", s);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
			s = "(nil)";
	}
	putchar(10);
	va_end(ap);
}
