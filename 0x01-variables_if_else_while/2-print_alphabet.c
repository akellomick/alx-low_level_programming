#include<stdio.h>

/**
 * main - Entry point. putchar() to print alphabets
 *
 *Return: Alwats (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
