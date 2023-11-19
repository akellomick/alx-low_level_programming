#include "lists.h"

/**
 * add_node- adds a new node at the beginning of a list_t list.
 * @head: start of node.
 * @str: pointer list.
 *
 * Return: pointer to start of node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_Node = malloc(sizeof(list_t));

	if (!new_Node)
		return (NULL);

	new_Node->str = strdup(str);
	new_Node->len = len;
	new_Node->next = (*head);
	(*head) = new_Node;

	return (*head);
}
