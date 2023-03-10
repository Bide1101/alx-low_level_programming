#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: argument count
* @argv: arguments
* Return: 0 Always
*/

int main(int argc, char **argv)
{
	int a, b, sum = 0;
	char *l;

	if (argc < 2)
	{
		putchar('0');
		putchar(10);
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &l, 10);
		if (*l)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
