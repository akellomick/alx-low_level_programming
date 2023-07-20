#include "main.h"

/**
 * print_numbers - prints numbers 0-9.
 *
 * Return: Numbers 1-9 printed.
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}
