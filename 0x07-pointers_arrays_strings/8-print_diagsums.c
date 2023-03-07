#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int p, i = 0, j = 0, l = 0, r = 0;

	while (i < size)
	{
		p = (i * size) + i;
		l += *(a + p);
		i++;
	}
	while (j < size)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
		j++;
	}
	printf("%i, %i\n", l, r);
}
