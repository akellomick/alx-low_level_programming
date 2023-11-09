#include "variadic_functions.h"

/**
 * sum_them_all- returns sum of all its parameters.
 * @n: number of arguments.
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
