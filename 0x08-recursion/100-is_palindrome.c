#include "main.h"

/**
* _strlen_recursion - Prints the length of a string.
* @c: string to be printed
* Return: length of string
*/

int _strlen_recursion(char *c)
{
	if (c[0] != '\0')
	{
		return (1 + _strlen_recursion(c + 1));
	}

	return (0);
}

/**
* palin- check if s is palindrome.
* @x: string base address.
* @a: left index.
* @b: rigth index.
* Return: 1 or 0
*/

int palin(char *x, int a, int b)
{
	if (x[a] == x[b])
		if (a > b / 2)
			return (1);
		else
			return (palin(x, a + 1, b - 1));
	else
		return (0);
}

/**
* is_palindrome - check if s is palindrome
* @s: base address for string
* Return: 1 or 0
*/

int is_palindrome(char *s)
{
	return (palin(s, 0, _strlen_recursion(s) - 1));
}
