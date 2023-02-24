#include "main.h"
/**
* _isdigit - print c if c is a digit from 0-9
* @c: digit
* Return: return 1 if c is a digit otherwise return 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= 9)
		return (1);
	else
		return (0);

}
