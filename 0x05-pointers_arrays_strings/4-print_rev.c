#include "main.h"

/**
 * print_rev - prints string in reverse.
 * @s: pointer to reversed string
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	int count = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		count++;
		len++;
	}

	len = count - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
