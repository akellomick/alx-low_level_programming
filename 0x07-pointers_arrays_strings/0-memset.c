/**
 * _memset - fills specified memory area with specified byte.
 * @s:points start of memory area.
 * @b: constant byte.
 * @n: bytes of memory.
 *
 * Return: A pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*s++ = b;
	}
	return (s);
}
