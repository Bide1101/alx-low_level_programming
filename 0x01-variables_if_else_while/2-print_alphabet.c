#include <stdio.h>
/**
* main - prints alphabetic lower case
* Return: always 0
*/
int main(void)
{
	char alc;

	for (alc = 'a';  alc <= 'z'; alc++)
	{
		putchar(alc);
	}
	putchar('\n');
	return (0);
}
