#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates and initialises an array of char.
 * @size: size of array.
 * c: character to initialoize.
 *
 * Return: pointer to the array , else NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str_array;

	if (size == 0)
		return (NULL);

	str_array = malloc(sizeof(char) * size);

	if (str_array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		str_array[x] = c;
	}

	return (str_array);
}
