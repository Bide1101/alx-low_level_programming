#include "lists.h"

/**
* sum_dlistint - sums up all the data (n) of a dlistint_t linked list
* @head: pointer to the first node of the list.
* Return: the sum of all the data (n)
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
