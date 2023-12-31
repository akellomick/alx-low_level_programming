/**
 * _strcat - concatinates two strings.
 * @dest: string 1 to concatinate.
 * @src: second string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
