#include "main.h"

/**
 * flip_bits- counts number of bits to change.
 * @n: first number
 * @m: second number
 *
 * Return: count of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;

	unsigned long int a;
	unsigned long int b = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = b >> x;
		if (a & 1)
			count++;
	}
	return (count);
}
