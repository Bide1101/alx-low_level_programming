#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
*
* @s: the initial segment of
*
* @accept: which consist only of bytes from
* Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, z = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				z++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (z);
		}
		s++;
	}
	return (z);
}
