#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: head of the list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp, *temp;

	if (*head == NULL)
	return (0);
	temp = *head;
	temp1 = temp->next;
	node = temp->n;
	free(temp);
	*head = temp1;
	return (node);
}
