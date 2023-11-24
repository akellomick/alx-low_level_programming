#include "main.h"

/**
 * set_bit- set value of bit at index to 1.
 * @n: pointer to num.
 * @index: position of value sort.
 *
 * Return: 1- success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


