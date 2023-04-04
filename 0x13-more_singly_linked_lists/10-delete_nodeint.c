#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the first node
 * @index: the index of the node.
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	
	listint_t *prev;
	listint_t *next;
	unsigned int nu;

	prev = *head;

	if (index != 0)
	{
		for (nu = 0; nu < index - 1 && prev != NULL; nu++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
