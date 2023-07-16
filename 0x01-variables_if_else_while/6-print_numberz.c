#include<stdio.h>
/**
 * main - Entry point
 * print base 10 numbers. use putcha
 *
 * Return: Always (0)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
