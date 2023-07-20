#include <stdio.h>

/**
 * _isupper - checks if a character is in Uppercase
 *@c: character to be checked.
 *
 * Return: 1 if true, 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
