#include "lists.h"

/**
 * print_listint_safe - prints a linked list with a loop.
 * @head: pointer to the 1st node
 * Return: new node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l = NULL;
	size_t cou = 0;
	size_t new;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		cou++;
		tmp = tmp->next;
		l = head;
		new = 0;
		while (new < cou)
		{
			if (tmp == l)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (cou);
			}
			l = l->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (cou);
}
