#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _realloc - Reallocate a memory block using malloc and free
* @ptr: Pointer to the previously allocated memory
* @old_size: Size, in bytes, of the allocated space for ptr
* @new_size: New size, in bytes.
* Return: Pointer to the newly allocated memory block,
* or NULL if the function fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *p1;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	p1 = (char *)ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		*new_ptr++ = *p1++;
	}

	free(ptr);
	return (new_ptr);
}
