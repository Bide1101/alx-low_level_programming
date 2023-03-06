#include "main.h"

/**
* _memcpy - function copies @n bytes from memory area @src
* to memory area @dest
* @n: function copies
* @src: bytes from memory area
* @dest: to memory area
* Return: @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)

		n = src[i];
		dest [i] = src[i];
	

	return (dest);
}
