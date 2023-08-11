#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string copied to.
 * @s2: string copied from.
 * @n: bytes copied from s2.
 *
 * Return: pointer to resultant string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, w = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	if (n >= y)
		w = x = y;
	else
		w = x + n;

	str = malloc(sizeof(char) * w + 1);

	if (str == NULL)
		return (NULL);

	y = 0;
	while (z < w)
	{
		if (z <= x)
			str[z] = s1[z];
		if (z >= x)
		{
			str[z] = s2[y];
			y++;
		}
		z++;
	}
	str[z] = '\0';
	return (str);
}
