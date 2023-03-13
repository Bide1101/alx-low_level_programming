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

	if (str == 0)
		return (NULL);

	while (str[n] != '\0')
		n++;

	ptr = (char *)malloc((n * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)

		ptr[i] = str[i];
	ptr[n] = '\0';
	
		return (ptr);
}
