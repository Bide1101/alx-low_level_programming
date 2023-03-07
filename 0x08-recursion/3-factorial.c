#include "main.h"

/**
* factorial - factorial of an integer
* @n: integer
* Return: 1 or -1 or factorial
*/

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
