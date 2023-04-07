#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: pointer to the integer value.
* @index: the index, starting from 0 of the bit you to be set.
* Return: 1 if success or -1 if an error ocurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, size = (sizeof(unsigned long int) * 8);

	if (index <= size)
	{
		mask = ~(1UL << index);   /* creates a mask with a 0 in the index position */
		*n = *n & mask;          /* set the bit to 0 by using & with the mask */
		return (1);
	}
	else
		return (-1);
}
