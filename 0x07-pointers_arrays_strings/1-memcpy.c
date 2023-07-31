/**
 * _memcpy - copies n memory area from src to dest.
 * @dest: mem area copied to.
 * @src: mem area copied.
 * @n: num of bytes copied.
 *
 * Return:pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	char *destination = dest;

	for (x = 0; x <= n; x++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (destination);
}
