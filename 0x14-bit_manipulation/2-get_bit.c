#include "main.h"

/**
 * get_bit- returns value of bit at index.
 * @n: number checked.
 * @index: position sort after.
 *
 * Return: bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
