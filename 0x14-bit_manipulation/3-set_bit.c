#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: pointer of an unsigned long int.
 * @index: index with in binary number
 * Return: 1 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
	return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
