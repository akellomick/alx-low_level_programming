#include <stdio.h>

/**
 * _strstr - checks if substring needle is in string haystack.
 * @haystack: string checked.
 * @needle: string searched.
 *
 * Return: pointer to beging of substring found,
 * NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*x == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
