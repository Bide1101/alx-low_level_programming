#include <stdio.h>

/**
* main - print file name
* @argc: argument count
* @argv:  argument string
* Return: 0 Always
*/

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
