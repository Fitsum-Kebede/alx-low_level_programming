#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre;
	listint_t *next;

	pre = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}

	*head = pre;
	return (*head);
}
