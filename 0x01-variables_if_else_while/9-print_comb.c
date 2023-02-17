#include <stdio.h>

/**
 * main - A program that prints all combination of single digits
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; n < 100; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
