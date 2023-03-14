#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function that returns a pointer
* to a 2 dimensional array of integers
* @width: width of the array
* @height: height of the arry
* Return: Pointer or NULL
*/

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				i--
			free(arr[i]);
			}
		free(arr);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
