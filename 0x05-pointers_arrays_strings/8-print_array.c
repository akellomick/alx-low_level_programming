#include <stdio.h>

/**
 * print_array - prints elements of an array of integer.
 * @a: pointer to array.
 * @n: number of elements in the array.
 *
 * Return: elements of array.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}

	printf("\n");
}
