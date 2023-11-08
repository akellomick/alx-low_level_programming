#include "function_pointers.h"

/**
 * int_index- searches for a number.
 * @array: array
 * @size: size of array
 * @cmp: pointer to compare function
 *
 * Return: Nothig
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}

	return (-1);
}
