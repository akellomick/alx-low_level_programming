/**
 * _strlen_recursion - returns length of string.
 * @s: string whose length is counted.
 *
 * Return: 0 if success.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	return (0);
}
