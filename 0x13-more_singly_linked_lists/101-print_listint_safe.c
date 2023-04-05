#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list.
* @head: pointer to the first node of the list
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t *curr;
	const listint_t **tmp_list, **list = NULL;

	if (head == NULL)
		exit(98);

	curr = head;
	while (curr != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (curr == list[i])
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				free(list);
				exit(98);
			}
		}
		num++;
		tmp_list = malloc(num * sizeof(listint_t *));
		if (tmp_list == NULL)
			exit(98);

		for (i = 0; i < num - 1; i++)
			tmp_list[i] = list[i];

		tmp_list[num - 1] = curr;
		free(list);
		list = tmp_list;
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
	}
	free(list);
	return (num);
}
