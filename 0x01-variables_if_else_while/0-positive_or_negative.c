#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - use nested if_else to check is random number
 *is positive/0/negative
 *
 * Return: Always(0)
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
