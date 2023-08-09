#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings, allocates memory to resultant string.
 * @s1: str to concatenate
 * @s2: str to concatenate
 *
 * Return: pointer to resultant string.(s1+s2)
 */
char *str_concat(char *s1, char *s2)
{
	char *final_cpy;
	int size1, size2, x;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	size1 = 0;

	while (s1[size1] != '\0')
		size1++;

	size2 = 0;

	while (s2[size2] != '\0')
		size2++;

	final_cpy = malloc(sizeof(char) * (size1 + size2 + 1));

	if (final_cpy == NULL)
		return (NULL);

	for (x = 0; x < size1; x++)
		final_cpy[x] = s1[x];

	for (x = 0; x < size2; x++)
		final_cpy[size1 + x] = s2[x];

	return (final_cpy);
}
