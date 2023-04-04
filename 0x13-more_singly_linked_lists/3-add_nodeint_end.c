#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to the first node ofthe  list.
 * @n: element to add a node.
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *temp;

	(void)temp;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
	*head = new_n;
	}
	else
	{
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = new_n;
	}

	return (*head);
}
