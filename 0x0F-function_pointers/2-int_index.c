#include "function_pointers.h"

/**
 * int_index - searches for an int.
 * @array: array searched.
 * @size: size of array.
 * @cmp: pointer to function used to compare.
 *
 * Return: index of first element found. -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}

	return (-1);
}
