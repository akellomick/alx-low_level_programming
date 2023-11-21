#include "lists.h"

/**
 * listint_len -  returns the number of elements in list.
 * @h: list.
 *
 * Return: elements in list.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
