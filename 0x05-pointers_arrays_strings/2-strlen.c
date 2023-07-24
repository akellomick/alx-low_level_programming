#include "main.h"

/**
 * _strlen - returns length of a string.
 * @s: String whose length is returned.
 *
 * Return: length of passed string.
 */
int _strlen(char *s)
{
	int count = 0;
	int pos = 0;

	while (s[pos] != '\0')
	{
		count++;
		pos++;
	}

	return (count);
}
