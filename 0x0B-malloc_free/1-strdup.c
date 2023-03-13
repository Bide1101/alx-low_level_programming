#include "main.h"
#include <stdlib.h>

/**
* _strdup -  Returns a pointer to a newly allocated space in memory
* @str: string
* Return: NULL or a char pointer
*/

char *_strdup(char *str)
{
	char *ptr;
	int n = 0, i;

	ptr = (char *)malloc(sizeof(str) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		ptr[i] = str[i];
	}

	if (str == 0)
		return (NULL);
	else
		return (ptr);
}
