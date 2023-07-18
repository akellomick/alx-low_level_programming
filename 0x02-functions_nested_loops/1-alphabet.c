#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: On success 1.
 */
char print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (alphabet);
}
