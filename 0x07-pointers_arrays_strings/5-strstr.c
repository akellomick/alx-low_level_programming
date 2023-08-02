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
		if (*haystack == *needle)
		{
			return (haystack);
		}
		else
			haystack++;
	}
	return (NULL);
}
