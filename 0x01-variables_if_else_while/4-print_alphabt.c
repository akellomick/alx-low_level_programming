#include<stdio.h>

/**
 * main - Entry point.
 * putchar alphabets with exception of 'e' && 'q'
 *
 * Return: Always (0)
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		if (ltr != 'e' && ltr != 'q')
			putchar(ltr);

	putchar('\n');
	return (0);
}
