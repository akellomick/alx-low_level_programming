#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - nultiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul, num_1, num_2;

	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);

		mul = (num_1 * num_2);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
