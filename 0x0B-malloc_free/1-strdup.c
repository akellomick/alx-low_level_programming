#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocates memory dinamically to a copy of str.
 * @str: string duplicated.
 *
 * Return: pointer to a duplicate of str.
 */
char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int x, length;

	if (str == NULL)
		return (NULL);

	length = 0;

	while (str[length] != '\0')
		length++;

	str_cpy = malloc(sizeof(char) * (length + 1));

	if (str_cpy == NULL)
		return (NULL);

	for (x = 0; x <= length; x++)
		str_cpy[x] = str[x];

	return (str_cpy);

}
