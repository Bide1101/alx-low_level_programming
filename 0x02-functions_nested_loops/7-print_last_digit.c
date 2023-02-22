#include "main.h"

/**
* print_last_digit - prints last digit of a number
* @l: integer checked
* Return: 0 (success)
*/

int print_last_digit(int l)
{	int ld = l % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
