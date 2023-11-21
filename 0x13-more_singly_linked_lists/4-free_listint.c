#include "lists.h"

/**
 * free_listint-  frees a listint_t.
 * @head: first node.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
