#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: string to be printed.
 *
 * Return: Printed string.
 */
void puts_half(char *str)
{
	int n, x, length_of_string = 0;

	for (x = 0; str[x] != '\0'; x++)
		length_of_string++;

	n = (length_of_string - 1) / 2;

	for (x = n + 1; str[x] != '\0'; x++)
		_putchar(str[x]);

	_putchar('\n');
}
