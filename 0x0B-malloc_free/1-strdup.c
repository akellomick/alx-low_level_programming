#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup- returns a pointer to a newly allocated space .
 * @str: pointer to copied string.
 *
 * Return: pointer allocated space.
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dst_str;

	if (str == NULL)
	{
		return (NULL);
	}

	dst_str = (char *)malloc(len + 1);

	if (dst_str == NULL)
	{
		return (NULL);
	}

	strcpy(dst_str, str);

	return (dst_str);
}
