#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointer to the first node
 * Return: 0.
 */

void free_listint(listint_t *head)
{
	listint_t *po;

	while (head != NULL)
	{
	po = head;
	head = head->next;
	free(po);
	}
}
