#include "variadic_functions.h"

/**
 * print_all - prints everything.
 * @format: list of arguments passed .
 *
 * Returns: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *word, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					word = va_arg(list, char *);
					if (!word)
						word = "(nil)";
					printf("%s%s", separator, word);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
