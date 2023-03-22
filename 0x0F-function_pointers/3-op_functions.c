#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
* op_add - adds two integer
* @a: first int
* @b: second int
* Return: sum of integers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substraction of two integer
* @a: first int
* @b: second int
* Return: difference of integers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two integer
* @a: first int
* @b: second int
* Return: product of integers
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - a divided by b
* @a: first integer
* @b: second integer
* Return: quotient
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a modulo b
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
