#include "main.h"

/**
* times_table - 9 multiplication table
*/

void times_table(void)
{
	int num, mul, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			res = num * mul;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
