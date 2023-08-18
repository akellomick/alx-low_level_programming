#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes sum of its parameters.
 * @n:count of parameters to add.
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int result = 0, i;

	va_start(list, n);

	for (i = 0; i < n; i++)
		result += va_arg(list, unsigned int);

	va_end(list);

	return (result);
}
