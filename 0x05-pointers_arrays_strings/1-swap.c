#include "main.h"

/**
* swap_int - swap integers
* @a: first integer
* @b: second integer
* Return: 0 (success)
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

	return (0);
}
