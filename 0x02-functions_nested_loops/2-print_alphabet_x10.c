#include "main.h"

/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*in lowercase, followed by a new line
*/

void print_alphabet_x10(void)
{

	int print = 0;
	char alpha;

	while (print++ < 10)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	}

}
