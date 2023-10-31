#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creates an array of chars, and initializes it.
 * @size: size of array.
 * @c: characters in array.
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
