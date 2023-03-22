#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - prints opcodes
* @p: address ofmain function
* @nbytes: number of bytes
* Return: void
*/

void print_opcodes(char *p, int nbytes)
{
	int i;

	p = (char *)print_opcodes;

	for (i = 0; i < nbytes - 1; i++)
	{
		printf("%02hhx ", p[i]);
	}
	printf("%02hhx\n", p[i]);
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

	if (argc !=  2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, bytes);
	return (0);
}
