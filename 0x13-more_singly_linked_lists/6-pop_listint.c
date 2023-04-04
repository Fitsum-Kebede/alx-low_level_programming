#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: head of the list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp; 
	listint_t *next;

	if (*head == NULL)
	return (0);
	temp = *head;
	next = temp->next;
	first_node = temp->n;
	free(temp);
	*head = next;
	return (first_node);
}
