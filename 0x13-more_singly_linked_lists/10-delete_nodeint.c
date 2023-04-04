#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the first node
 * @index: the index of the node.
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp
	listint_t *temp1;
	unsigned int nu;

	temp = *head;
	if (index != 0)
	{

	for (nu = 0; nu < index - 1 && temp != NULL; nu++)
	{
		temp = temp->temp1;
	}
	}
	if (temp == NULL || (temp->temp1 == NULL && index != 0))
	{
		return (-1);
	}
	temp2 = temp->temp2;

	if (index != 0)
	{
		temp->temp1 = temp1->temp1;
		free(temp1);
	}
	else
	{
	free(temp);
	*head = temp1;
	}
	return (1);
	}
