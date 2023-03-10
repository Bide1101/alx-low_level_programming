#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make
* change for an amount of money
* @argc: argument count
* @argv: arguments
* Return: 1 or 0
*/
int main(int argc, char **argv)
{
	int t, c;
	unsigned int i;
	int cents[] = {25, 10, 5, 2};
	char *j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = strtol(argv[1], &j, 10);
	c = 0;

	if (!*j)
	{
		while (t > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (t >= cents[i])
				{
					c = c + (t / cents[i]);
					t = t % cents[i];
				}
			}
		}
		if (t == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
	return (0);
}
