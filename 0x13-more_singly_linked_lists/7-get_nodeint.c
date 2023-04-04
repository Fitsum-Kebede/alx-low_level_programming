#include "lists.h"

/**
 * get_nodeint_at_index - get node
 * @head: pointer to the first node
 * @index: no of node to access
 * Return: adress of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	head = head->next;

	return (head);
}
