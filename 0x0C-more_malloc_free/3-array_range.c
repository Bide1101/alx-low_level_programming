#include "main.h"
#include <stdlib.h>

/**
* array_range - create an array of integers
* @min: the minimum value
* @max: the maximum value
* Return: pointer to the array, or NULL if unsuccessful
*/

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i <= max - min; i++)
	arr[i] = min + i;

	return (arr);
}
