#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments
 * Return: Pointer or NUlL
 */

char *argstostr(int ac, char **av)

{
	int a, i, j, len = 0;
	char *ptr, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str = av[i];
		j = 0;


		while (str[j++])
			len++;
		len++;
	}

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);


	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		str = av[i];
		a = 0;


		while (str[a])
		{
			ptr[j] = str[a];
			a++;
			j++;
		}

		ptr[j++] = '\n';
	}
	ptr[j] = '\0';

	return (ptr);
}
