/**
 * rev_string- reverses a string.
 * @s: reversed string.
 *
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char temp;
	int pos;
	int count = 0;

	for (pos = 0; s[pos] != '\0'; pos++)
		count++;

	for (pos = 0; pos < count / 2; pos++)
	{
		temp = s[pos];
		s[pos] = s[count - 1 - pos];
		s[count - 1 - pos] = temp;
	}
}
