#include "main.h"

/**
 * _sqrt_recursion - returns natural sqrt of n.
 * @n: num to compute sqrt.
 *
 * Return: sqrt of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - recusively finds square root of n.
 * @n: num to get sqrt.
 * @x: Iterator.
 *
 * Return: sqrt of n.
 */
int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}
