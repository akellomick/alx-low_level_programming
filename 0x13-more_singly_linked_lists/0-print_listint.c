#include "lists.h"

/**
 * print_listint-  prints all the elements of a listint_t.
 * @h: list to be printed.
 *
 * Return: number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->n != 0)
			printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
