#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: poiter to address of string to print
 *
 * Return: Always (0).
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);

	_putchar('\n');
}
