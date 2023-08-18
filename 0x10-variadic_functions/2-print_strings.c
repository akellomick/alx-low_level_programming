#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line.
 * @separator: string separator.
 * @n: number of strings passed to function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *word;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		word = va_arg(list, const char *);

		if (word != NULL)
			printf("%s", word);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");

	va_end(list);
}
