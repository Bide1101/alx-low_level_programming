#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers,
* from 0 to 14, followed by a new line
* Return: 0 (success)
*/

void more_numbers(void)
{
int n, m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			_putchar('1');
			_putchar(m % 10 + '0');
		}
			_putchar('\n');
		}
}
