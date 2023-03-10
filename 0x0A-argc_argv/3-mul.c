#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two arguments
* @argc: argument count
* @argv: string
* Return: 1
*/

int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc < 3)
	{
	printf("Error\n");
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
