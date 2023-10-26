#include "main.h"
#include <stdio.h>

int is_prime(int n, int x);

/**
 * is_prime_number- Returns if number is prime.
 * @n: base to be checked.
 *
 * Return: interger value.
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime- checks if n is prime.
 * @n: base to be checked.
 * @x: iterator.
 *
 * Return: 1 for prime, 0 otherwise.
 */
int is_prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (is_prime(n, x + 1));
}
