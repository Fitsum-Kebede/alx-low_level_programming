#include "main.h"

/**
 * get_bit - Gets bit at index.
 * @n: The bit.
 * @index: index within a binary number
 * Return: 0 or 1, or -1 if there is error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);


	if ((n & (1 << index)) == 0)
	return (0);
	return (1);
}
