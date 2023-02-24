#include "main.h"

/**
* print_numbers - print 0-9
* Return: 0 (succes)
*/

void print_numbers(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
	_putchar(p);
	}
	_putchar('\n');
}

