#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int m, n;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; *(s + m); m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (a[n] == *(s + m))
			{
				*(s + m) = b[n];
				break;
			}
		}
	}
	return (s);
}
