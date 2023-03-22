#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: array of integers
* @size: number of elements in the array
* @cmp: pointer to function
* Return: return an index number or -1
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	 int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	i++;
	}
	return (-1);
}
