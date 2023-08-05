#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 success, else 1
 */
int main(int argc, char *argv[])
{
	int x, count;
	int sum = 0;
	char *_str;

	x = 1;
	while (x < argc)
	{
		_str = argv[x];
		count = 0;
		while (_str[count] != '\0')
		{
			if (_str[count] < '0' || _str[count] > '9')
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
		x++;
	}

	for (x = 1; x < argc; x++)
	{
		sum  = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

