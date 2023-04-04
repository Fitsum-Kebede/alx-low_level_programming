#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointer to the first node
 * Return: 0.
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
	p = head;
	head = head->next;
	free(p);
	}
}
