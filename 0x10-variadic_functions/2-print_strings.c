#include "variadic_functions.h"

/**
 * print_strings- prints strings.
 * @separator: separator.
 * @n: argument count.
 *
 * Return: strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list name;
	unsigned int count;
	char *str;

	va_start(name, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(name, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(name);
}
