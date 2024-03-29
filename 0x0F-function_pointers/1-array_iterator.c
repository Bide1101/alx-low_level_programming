#include "function_pointers.h"

/**
* array_iterator - a function that executes a function given
* as a parameter on each element of an array
* @array: array
* @size: size of the array
* @action: pointer to the function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size && size != 0)
	{
		if (array != NULL && action != NULL)
		{
			action(array[i]);
		}
		i++;
	}
}
