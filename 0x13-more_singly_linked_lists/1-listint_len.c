#include "lists.h"
/**
* listint_len - returns the number of elements
* @h: head pointer
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
	return (0);


	while (h != NULL)
	{

	len++;
	h = h->next;

	}
	return (len);
}
