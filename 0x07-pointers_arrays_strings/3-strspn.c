/**
 * _strspn - gets length of a prefix substring.
 * @s:stringc checked.
 * @accept: string compared to s.
 *
 * Return: num of bytes of s that consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y = 0;

	while (s[y] != '\0')
	{
		x = 0;
		while (accept[x] != '\0' && s[y] != accept[x])
			x++;
		if (accept[x] == '\0')
			return (y);
		y++;
	}
	return (y);
}
