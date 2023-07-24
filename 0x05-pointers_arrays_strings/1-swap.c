#include <stdio.h>

/**
 * swap_int - swaps the values of two intergers.
 * @a: int to be swaped.
 * @b: int to be swaped.
 *
 * Return: swaped integers.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
