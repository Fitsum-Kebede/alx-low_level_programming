#include "main.h"

/**
 * flip_bits - flips bits to convert number
 * @n: first number.
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	unsigned long int b = 0;

	d = n ^ m;

	while (d > 0)
	{
		b += (d & 1);
		d >>= 1;
	}

	return (b);
}
