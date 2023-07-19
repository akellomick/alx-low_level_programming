#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 *Return: Always 1 on success
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int column = 0;

	while (column < 10)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet < 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
		column++;
	}

	return (void);
}
