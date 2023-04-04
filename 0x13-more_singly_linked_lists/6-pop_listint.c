#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: pointer to the first node
 * Return: n
 */

int pop_listint(listint_t **head)
{
	int first_node;

	listint_t *temp
	listint_t *cur;

	if (*head == NULL)
	return (0);

	cur = *head;
	first_node = cur->next;

	first_node = cur->n;

	free(cur);

	*head = temp;
	return (first_node);
}
