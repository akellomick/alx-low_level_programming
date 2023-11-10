#include "variadic_functions.h"

/**
 * print_all- Prints anything.
 * @format: list of types of arguments passed.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *str, *sep = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(args);
}
