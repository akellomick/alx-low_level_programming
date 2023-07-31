/**
 * _memset - fills n bytes of memory with b, starting from s.
 * @s: start of memory to fill.
 * @b: bytes to be filled
 * @n: number of bytes to fill.
 *
 * Return: A pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char *begin = s;

	for (x = 0; x < n; x++)
	{
		*s++ = b;
	}
	return (begin);
}
