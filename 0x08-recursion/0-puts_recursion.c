#include "main.h"

/**
* _puts_recursion -  prints a string.
* @s: string
*/

void _puts_recursion(char *s)
{
	int i = 0;

	while (i < s[i])
	{	_putchar(s[i]);
		i++;
	}
		_putchar(10);

	if (s[i] == *s)
		_putchar(10);
}
