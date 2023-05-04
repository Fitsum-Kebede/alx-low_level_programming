#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianness
 * Return: 0 and 1
 */

int get_endianness(void)
{
	unsigned int nu;
	char *s;

	nu = 1;
	s = (char *) &nu;

	return ((int)*s);
}
