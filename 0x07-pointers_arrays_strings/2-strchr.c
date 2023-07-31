#include <stdio.h>
/**
 * _strchr - search for occurance of c in s.
 * @s: string in which c is searched
 * @c: character searched in s.
 *
 * Return: pointer to first occurance of c.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) == c)
			return (s + x);
		x++;
	}
	if (*(s + x) == c)
		return (s + x);
	return (NULL);
}
