#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat- concatenates strings s1 and s2.
 * @s1: first string to concatinate.
 * @s2: second string to concatinate.
 *
 * Return: pointer to concatinated string.
 */
char *str_concat(char *s1, char *s2)
{
	int w = 0, x = 0, y = 0, z = 0;
	char *final;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[w])
		w++;

	while (s2[x])
		x++;

	z = w + x;
	final = malloc((sizeof(char) * z) + 1);

	if (final == NULL)
		return (NULL);
	x = 0;

	while (y < z)
	{
		if (y <= w)
			final[y] = s1[y];

		if (y >= w)
		{
			final[y] = s2[x];
			x++;
		}
		y++;
	}
	final[y] = '\0';
	return (final);
}
