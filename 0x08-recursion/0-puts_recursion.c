#include "main.h"

/**
* _puts_recursion -  prints a string.
* @s: string
*/

void _puts_recursion(char *s)
{
	int i;

	if (s[i] == '/0')
		_putchar(10);

	for (i = 0; i< s[i]; i++)
		_putchar(s[i]);
}
