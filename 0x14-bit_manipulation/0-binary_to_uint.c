#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: binary to convert.
 *
 * Return: resultant unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int itr = 0;

	if (b == NULL)
		return (0);

	while (b[itr])
	{
		if (b[itr] != '0' && b[itr] != '1')
			return (0);

		val <<= 1;
		val += b[itr] - '0';
		itr++;
	}
	return (val);
}
