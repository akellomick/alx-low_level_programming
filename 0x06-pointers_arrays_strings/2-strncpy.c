/**
 * _strncpy - copy specified number of characters from s1 to s2.
 * @dest: characters copied to.
 * @src: copied from.
 * @n: number of characters to copy.
 *
 * Return: a pointer to receiving string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; src[y] != '\0' && y < n; y++)
		dest[y] = src[y];
	while (y < n)
		dest[y++] = '\0';

	return (dest);
}
