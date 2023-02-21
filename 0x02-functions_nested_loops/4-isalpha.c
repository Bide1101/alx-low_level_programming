#include "main.h"
/**
* _isalpha - prints all alphabet lower & upper case
* @c: upper and lower case
* Return: return 1 if c is a letter else return 0
*/

int _isalpha(int c)
{
	char alpha;

	if (alpha++ <= 'z' && alpha <= 'Z')
		return (1);
	else
		return (0);
}
