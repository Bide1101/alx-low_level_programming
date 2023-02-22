#include "main.h"

/**
* _islower - a function that checks for lowercase character
* @c: c is the char to be checked
* Return: return 1 if c is lowercase else return 0
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')

		return (1);
	else
		return (0);
}
