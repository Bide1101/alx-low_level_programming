#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *ptr;
	int n = 0, i;

	ptr = (char*)malloc(sizeof(str) * sizeof(char));
	if (ptr == NULL)
		return(NULL);

	while(str[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		ptr[i] = str [i];
	}

	if (str == 0)
		return (NULL);
	else
		return (ptr);
}
