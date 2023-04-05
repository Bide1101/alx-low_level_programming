#include "lists.h"

/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to the first node of the list.
* Return: the size of the list that was freed.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *curr = *h;
	listint_t *nxt = NULL;
	listint_t **list = NULL;

	while (curr != NULL)
	{
		size++;
		nxt = curr->next;
		list = malloc(size * sizeof(listint_t *));
		if (list == NULL)
		{
			while (--size > 0)
				free(list[size - 1]);
			free(list);
			exit(98);
		}

		list[size - 1] = curr;
		free(curr);
		curr = nxt;

		if (curr == *h)
		{
			*h = NULL;
			free(list);
			return (size);
		}
		break;
	}
	*h = NULL;
	curr = nxt;
	free(list);
	return (size);
}
