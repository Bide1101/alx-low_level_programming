#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: pointer to the integer value.
* @index: The index, starting from 0 of the bit you want to set.
* Return: 1 if successful or 0 if error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(unsigned long int) * 8);

	if (index >= size)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
