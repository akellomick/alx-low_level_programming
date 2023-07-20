#include "main.h"

/**
 * print_line - Prints _ based on number given.
 * @n: number of times _ should be printed
 *
 * Return: printed _
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count <= n; count++)
			_putchar('_');
	}

	_putchar('\n');
}
