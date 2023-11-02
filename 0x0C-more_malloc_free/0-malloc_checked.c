#include "main.h"

/**
 * malloc_checked- allocated memory usig malloc.
 * @b: size of allocted mem.
 *
 * Return: pointer to allocated space.
 */
void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
