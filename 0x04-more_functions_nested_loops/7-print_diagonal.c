#include "main.h"

/**
 * print_diagonal - printing a diagonal
 * @n: number of times
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	int m, n;

	if (n <= 0)
		_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (n = 0; n < i; n++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
