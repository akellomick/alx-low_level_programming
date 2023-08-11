#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory allocated.
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *universal_type;

	universal_type = malloc(b);

	if (!(universal_type == NULL))
		return (universal_type);

	else
		exit(98);
}
