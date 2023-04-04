#include "lists.h"

/**
 * sum_listint - Calculates the sum
 * @head: first node
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
