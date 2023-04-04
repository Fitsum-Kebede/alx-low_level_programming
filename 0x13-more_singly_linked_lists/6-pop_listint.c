#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: head of the list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp1, *next;

	if (*head == NULL)
	return (0);
	temp1 = *head;
	next = temp1->next;
	node = temp1->n;
	free(temp1);
	*head = next;
	return (node);
}
