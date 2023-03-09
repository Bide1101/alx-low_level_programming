#include "main.h"

/**
* str_ - checks if two strings are identical.
* @s1: string_1
* @s2: string_2
* @a: index
* @i: index
* Return: 1 or  0
*/

int str_(char *s1, char *s2, int a, int i)
{
	if (s1[a] == '\0' && s2[i] == '\0')
		return (1);
	if (s1[a] == s2[i])
		return (str_(s1, s2, a + 1, i + 1));
	if (s1[a] == '\0' && s2[i] == '*')
		return (str_(s1, s2, a, i + 1));
	if (s2[i] == '*')
		return (str_(s1, s2, a + 1, i) || str_(s1, s2, a, i + 1));
	return (0);
}

/**
* wildcmp - checks if strings could be considered identical
* @s1: base address for string.
* @s2: base address for string.
* Return: 1 if identical
*/

int wildcmp(char *s1, char *s2)
{
	return (str_(s1, s2, 0, 0));
}
