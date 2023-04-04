#include "lists.h"

/**
 * free_listint - free linked list
 * @head: pointer to the first node of the list
 * Return: 0
 */


void free_listint(listint_t *head)
{
	listint_t *fir;

	while ((fir = head) != NULL)
	{

	head = head->next;
	free(fir);
	}
}
