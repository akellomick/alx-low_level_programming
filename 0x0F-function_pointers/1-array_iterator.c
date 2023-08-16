#include "function_pointers.h"

/**
 * array_iterator - executes action passed as parameter
 * @array: array whose elements are executed.
 * @size: size of array.
 * @action: pointer to actual function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		(*action) (array[x]);
	}
}
