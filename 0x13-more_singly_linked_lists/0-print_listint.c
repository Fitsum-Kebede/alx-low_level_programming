#include "lists.h"

/**
 * print_listint - prints linked list.
 * @h: head of a list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nod_num = 0;


	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	nod_num++;
	}
	return (nod_num);
}
