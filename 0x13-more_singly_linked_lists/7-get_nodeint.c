#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of
* a listint_t linked list.
* @head: pointer to the first node of the list.
* @index: the index of the node
* Return: returns nth node of the list or NULL if node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

		tmp = head;
		while (tmp != NULL && count < index)
		{
			tmp = tmp->next;
			count++;
		}
		if (count == index)
			return (tmp);
		else
			return (NULL);
}
