#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: pointer to the first node
 * Return: n
 */

int pop_listint(listint_t **head)
{
	int node1;

	listint_t *temp
	listint_t *next;

	if (*head == NULL)
	return (0);

	temp = *head;
	next = temp->next;

	node1 = temp->n;

	free(temp);

	*head = next;
	return (node1);
}
