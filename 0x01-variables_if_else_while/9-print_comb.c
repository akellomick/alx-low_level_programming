#include<stdio.h>

/**
 * main - display all posible combination of single numbers
 * use putchar, maximum four times
 *
 * Return: Always (0)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
