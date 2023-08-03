#include "main.h"

/**
 * _prime - recusively checks if n is Prime.
 * @n: num to check if Prime.
 * @div: divisor.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int _prime(int n, int div)
{
	if (n == 2)
		return (1);
	if (n % div == 0)
		return (0);
	if (div * div > n)
		return (1);
	return (_prime(n, div + 1));
}
/**
 * is_prime_number - checks if n is prime.
 * @n: num to check if prime.
 *
 * Return: 1 if n is prime,else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
