#include "main.h"

int sq(int a, int g)

{
	if (a * a == g)
		return (a);

	else if (a * a > g)
		return (-1);

	else
		return sq(a + 1,g);
}
int _sqrt_recursion(int n)
{
	 if (n == 0)
	{
		return (0);
	}
	else
	{
		return sq(1,n);
	}
}
