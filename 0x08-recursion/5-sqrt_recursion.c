#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);

/**
 * _sqrt_recursion- Returns natural sqrt of n.
 * @n: base to calculate sqrt.
 *
 * Return: natural sqrt of n.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- Calculates natiral square root of n.
 * @n: number to calculate sqrt.
 * @x: iterate value.
 *
 * Return: natural sqrt of n.
 */
int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (x);

	return (_sqrt(n, x + 1));
}
