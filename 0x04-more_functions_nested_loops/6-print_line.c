#include "main.h"

/**
 * print_line - Prints _ based on number given.
 * @n: number of times _ should be printed
 *
 * Return: printed _
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
			_putchar('_');
	}

	_putchar('\n');
}
