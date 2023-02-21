#include "main.h"

/**
* print_last_digit - prints last digit of a number
* @l: integer checked
* Return: 0 (success)
*/

int print_last_digit(int l)
{	l = l  % 10;
		if (l <= 0)

		_putchar (l);
		return (0);
}
