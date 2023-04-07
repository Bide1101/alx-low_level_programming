#include "main.h"

/**
* get_bit -  returns the value of a bit at a given index.
* @n: integer to find its bit a at given index.
* @index: the index, starting from 0 of the bit you want to get.
* Return: the value of the bit at index index or -1 if there is an error.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, size = (sizeof(unsigned long int) * 8);

	if (index <= size)
	{
		mask = 1UL << index;
		return ((n & mask) != 0); /*checks if bit is 1 or 0 (a boolean expression)*/
	}
	else
		return (-1);
}
