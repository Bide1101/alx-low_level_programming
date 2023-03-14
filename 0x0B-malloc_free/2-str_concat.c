#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string, destination
 * @s2: second string
 * Return: NULL or Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0;
	int len, l1 = 0, l2 = 0;

	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		while (s2[j++] != '\0')
			l2++;
	}

	len = l1 + l2;
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}

	ptr[len] = '\0';

	return (ptr);
}
