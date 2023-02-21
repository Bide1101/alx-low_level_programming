#include "main.h"

/**
* times_table - 9 multiplication table
*/

void times_table(void)
{
	int num, mul, res;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');

		for (mul = 1; mul < 10; mul++)
		{
			_putchar(',');
			_putchar(' ');

			res = num * mul;

			if (res < 10)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
	}
}
