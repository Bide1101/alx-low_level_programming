#include "main.h"

/**
* _strlen_recursion - length of string
* @s:string
* Return: length
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*n)
	{
		n++;
		n += _strlen_recursion(s + 1);

	}
	return (n);
}
