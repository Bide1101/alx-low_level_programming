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
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
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
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
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
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a * b);
}

 /**
* op_mul - a diivded by b
* @a: first int
* @b: second int
* Return: quotient of integers
*/
int op_div(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

 /**
* op_mul - a modulo b
* @a: first int
* @b: second int
* Return: remainder
*/

int op_mod(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
 	}
	return (a % b);
}
