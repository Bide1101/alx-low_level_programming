#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: argument count
* @argv: string
* Return: 0 Always
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
