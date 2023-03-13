#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of char and initializes it.
* @size: size of the array
* @c: char
* Return: NULL or pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
