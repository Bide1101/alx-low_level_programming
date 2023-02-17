#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry
* prints n is greater than 5 if last digit of n is greater than 5
* if last digit of n is 0, print n is 0
* if last digit of n is less than 6 and not 0 print less than 6 and not 0
* Return: 0 always
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 8;

	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and  not 0\n", n, a);
	}
	return (0);
}
