#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers,
* from 0 to 14, followed by a new line
* Return: (0) always
*/

void more_numbers(void)
{
	int n, m;

		for (i = 1; i <= 10; i++)
		{
			for (j = 0; j <= 14; j++)
			{
				if (m >= 10)
				_putchar('1');
				_putchar(m % 10 + '0');
			}
				_putchar('\n');
		}
}
