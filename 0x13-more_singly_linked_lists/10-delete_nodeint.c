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
	unsigned int nu = 1;

	temp = *head;
	while (temp != NULL)
	{
		if (index == 0)

		{
		temp1 = *head;
		*head = temp1->next;
		free(temp1);
		return (1);
		}

		else if (nu == index)
		{
		temp1 = temp->next;
		temp->next = temp1->next;
		free(temp1);
		return (1);
		}
		temp = temp->next;
		nu++;
	}
	return (-1);
}
