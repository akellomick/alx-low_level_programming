#include <stdio.h>

/**
 * _strpbrk - Searches string s for any of a set of bytes in accept.
 * @s: string searched.
 * @accept: set compared.
 *
 * Return: poiter to bytes in s that matches those in accept,
 * NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int y, x = 0;

	while (*(s + x))
	{
		y = 0;

		while (*(accept + y))
		{
			if (*(s + x) == *(accept + y))
			{
				return (s + x);
			}
		y++;
		}
		x++;
	}
	return (NULL);
}
