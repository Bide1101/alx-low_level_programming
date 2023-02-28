#include "main.h"

/**
* rev_string - reverses a string
* @s: char to check
* Return: 0 (success)
*/

void rev_string(char *s)
{
	int a = 0, b, c;
	char r;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		r = s[b];
		s[b] = s[c];
		s[c] = r;
	}
}
