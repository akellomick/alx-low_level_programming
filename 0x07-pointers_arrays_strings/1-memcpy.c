/**
 * _memcpy - copy n bytes from mem area src to dest.
 * @dest: mem area copied to.
 * @src: mem area copied.
 * @n: num of bytes copied from src to dest.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	char *destination = dest;

	for (x = 0; x < n; x++)
	{
		*dest++ = *src++;
	}

	return (destination);
}
