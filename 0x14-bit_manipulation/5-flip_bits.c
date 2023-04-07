#include "main.h"

/**
* flip_bits - a function that returns the number of bits you would need to
* flip to get from one number to another.
* @n: first integer value.
* @m: second integer value.
* Return: number of bits to be flipped.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int flip = n ^ m;
	int count = 0;

	while (flip != 0)
	{
		count = count + (flip & 1);
		flip >>= 1;
	}
	return (count);
}
