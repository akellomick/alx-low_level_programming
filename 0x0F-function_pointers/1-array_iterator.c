#include "function_pointers.h"

/**
 * array_iterator- executes func given as a param on elements of arr.
 * @array: array
 * @size: size of array
 * @action: function to use
 *
 * Retur: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
