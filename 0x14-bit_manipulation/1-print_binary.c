#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: number to convert to binary.
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (printed)
			{
				_putchar('0');
			}
		}
		else
		{
			_putchar('1');
			printed = 1;
		}
		mask >>= 1;
	}

	if (!printed)
	{
		_putchar('0');
	}
}
