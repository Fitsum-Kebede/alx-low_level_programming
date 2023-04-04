#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: pointer to the first node
 * Return: n
 */

int pop_listint(listint_t **head)
{
	int first_node;

	listint_t *temp;
	listint_t *cur;

	if (*head == NULL)
	return (0);

	temp = *head;
	cur = temp->cur;

	first_node = temp->cur;

	free(temp);

	*head = cur;
	return (first_node);
}
