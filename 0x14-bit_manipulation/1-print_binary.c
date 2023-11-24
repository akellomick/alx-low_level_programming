#include "main.h"

/**
 * print_binary- prints the binary representation of a number.
 * @n: decimal to convert.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int itr, count = 0;
	unsigned long int pos;

	for (itr = 63; itr >= 0; itr--)
	{
		pos = n >> itr;

		if (pos & 1)
		{
			_putchar('1');
			count++;
		}
		else if(count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
