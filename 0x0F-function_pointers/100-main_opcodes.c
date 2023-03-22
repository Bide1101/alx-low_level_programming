#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - prints opcodes
* @nbytes: number of bytes
* Return: void
*/

void print_opcodes(int nbytes)
{
	unsigned char *p;
	int i;

	p = (unsigned char *)print_opcodes;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx", p[i]);
		if (i < nbytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
* main - controls how the program is called
* @argc: argument count
* @argv: argument vector
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	int bytes;

	if (argc <  2)
	{
		printf("Error\n");
		exit (1);
	}

	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit (2);
	}

	print_opcodes(bytes);
	return (0);
}
