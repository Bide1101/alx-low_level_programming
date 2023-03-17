#include <stdlib.h>
#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: The string to measure
* Return: The length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
* is_valid_number - Checks if a string is a valid number
* @s: The string to check
* Return: 1 if the string is a valid number, otherwise 0
*/

int is_valid_number(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);

		s++;
	}
	return (1);
}

/**
* multiply - Multiplies two numbers represented as strings
* @num1: The first number to multiply
* @num2: The second number to multiply
* Return: A pointer to the result of the multiplication
*/

char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, sum;
	char *result = malloc(len1 + len2 + 1);

	if (!result)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
		sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;

		carry = sum / 10;
		result[i + j + 1] = (sum % 10) + '0';
		}

	result[i + j + 1] += carry;
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of pointers to the arguments
* Return: 0 on success, 98 on failure
*/
int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		_putchar(69);
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar(10);
		return (98);
	}
	num1 = argv[1], num2 = argv[2];
	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		_putchar(69);
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar(10);
		return (98);
	}
	result = multiply(num1, num2);
	if (!result)
	return (98);
	while (*result)
	{
		_putchar(*result);
		result++;
	}
	_putchar('\n');
	free(result);
	return (0);
}
