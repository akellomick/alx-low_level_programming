#include <stdio.h>

/**
 * int _islower - checks for lowercase character.
 * parameter c - checked if lowercase
 * Return: 0 if character is lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
