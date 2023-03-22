#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - mainfunction
* @argc: argument count
* @argv: argument vector
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	ptr = get_op_func(argv[2]);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

