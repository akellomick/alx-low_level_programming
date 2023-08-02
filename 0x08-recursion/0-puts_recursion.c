#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: pointer to string to be printed.
 *
 * Return:(0)on Success, else(1).
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}