/**
 * _strncat - concatinates strings dest and src.
 * @dest: string 1 to concat.
 * @src: string 2 to concat.
 * @n: max bytes for the concatinated string.
 *
 * Return: pointer to concatinated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
