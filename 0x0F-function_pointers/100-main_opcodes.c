#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own function
* @argc: argument count
* @argv: argument vector
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	register int i, nbytes;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes - 1; i++)
	{
		printf("%.2hhx ", p[i]);
	}
	printf("%.2hhx\n", p[i]);
	return (0);
}
