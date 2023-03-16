#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: integer to check
* Return: pointer or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int si, sj, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (si = 0; s1[si] != '\0'; si++)
		;
	for (sj = 0; s2[sj] != '\0'; sj++)
		;

	if (sj > n)
		sj = n;

	ptr = malloc(sizeof(ptr) * (si + sj + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < si; i++)
		ptr[i] = s1[i];
	for (j = 0; j < sj; j++)
		ptr[j + si] = s2[j];

	ptr[si + sj] = '\0';
	return (ptr);
}
