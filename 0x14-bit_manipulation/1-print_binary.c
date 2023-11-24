#include "main.h"

/**
 * print_binary- prints the binary representation of a number.
 * @n: decimal to convert.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int pos;

	pos = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (pos > 0)
	{
		if (n & pos)
			_putchar('1');
		else
			_putchar('0');

		pos >>= 1;
	}
}
