#include "main.h"

/**
* primen - checks if number is prime
* @m: integer
* @n: integer
* Return: integer
*/

int primen(int m, int n)
{
	if (n <= 1 || n % m == 0)
		return (0);

	else if (m > n / 2)
		return (1);

	else
		return (primen(m + 1, n));
}

/**
* is_prime_number - states if number is prime
* @n: integer
* Return: integer
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primen(2, n));
}
