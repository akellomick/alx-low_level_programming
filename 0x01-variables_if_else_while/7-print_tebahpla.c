#include<stdio.h>

/**
 * main - Entry point
 * putchar alphabets in reverse
 *
 * Return: Always (0)
 */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
	{
		putchar(ltr);
	}

	putchar('\n');
	return (0);
}
