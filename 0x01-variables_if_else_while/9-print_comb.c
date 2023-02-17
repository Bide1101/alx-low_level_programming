#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0
*/

int main(void)
{
	int num;

	for (num = 28; num < 38; num++)

	{
		putchar(num);
		if (num != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
