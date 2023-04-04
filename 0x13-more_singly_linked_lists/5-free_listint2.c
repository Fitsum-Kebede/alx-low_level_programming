#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: pointer to the first node
 * Return: 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp_1;

	if (head == NULL)
	{
	return;
	}
	tmp_1 = *head;

	while (tmp_1 != NULL)
	{
	tmp = tmp_1;
	tmp_1 = tmp_1->next;
	free(tmp);
	}

	*head = NULL;
}
