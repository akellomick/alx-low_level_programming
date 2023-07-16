#include<stdio.h>

/**
 * main - Entry point.
 * putchar() in nested for , print both lower and uppercase alphabets
 *
 * Return: Always (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
