#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: pointer to the first node..
 * @n: number to add a node.
 * Return: address of the new element.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	return (NULL);


	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (*head);
}
