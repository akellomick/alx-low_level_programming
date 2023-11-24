#include "main.h"

/**
 * clear_bit- set value of bit to 0 at index.
 * @n: pointer to num
 * @index: position of value sorted.
 *
 * Return: 1 success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
