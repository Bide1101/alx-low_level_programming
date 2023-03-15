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
	int i, j, a, len = 0;
	char *ptr, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i != ac; i++)
	{
		for (str = av[i]; str[j++]; len++)
		len++;
	}

		ptr = (char *)malloc((len + 1) * sizeof(char));
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
