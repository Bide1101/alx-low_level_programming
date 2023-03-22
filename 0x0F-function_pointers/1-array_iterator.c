#include "function_pointers.h"

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
