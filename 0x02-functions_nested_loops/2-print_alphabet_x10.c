#include "main.h"

/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*in lowercase, followed by a new line
*/

void print_alphabet_x10(void)
{

	char alpha;
	int print = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (print < 10)
			_putchar(alpha);
	}
	_putchar('\n');
	
}

