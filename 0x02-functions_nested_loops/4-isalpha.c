#include "main.h"
/**
* _isalpha - prints all alphabet lower & upper case
* @c: upper and lower case
* Return: return 1 if c is a letter else return 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
