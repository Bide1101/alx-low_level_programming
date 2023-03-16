#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements to allocate memory for
* @size: size of each element in bytes
* Return: pointer to allocated memory, or NULL if allocation fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
