#include "main.h"

/**
* sq - checks for the square root
* @a:integer
* @g:integer
* Return: integer
*/

int sq(int a, int g)

{
	if (a * a == g)
		return (a);

	else if (a * a > g)
		return (-1);

	else
		return (sq(a + 1, g));
}

/**
* _sqrt_recursion - natural square root of a number
* @n: integer value
* Return: integer
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		{
		return (0);
		}

	else
		{
		return (sq(1, n));
		}
}
