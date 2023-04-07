#include "main.h"

/**
* get_endianness - a function that checks if edianness is Little or Big.
* Return: 1 if Litte or 0 if Big.
*/

int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
	{
		return (1);
	}

	return (0);
}
