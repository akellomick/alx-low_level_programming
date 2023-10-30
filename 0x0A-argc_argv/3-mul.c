#include <stdio.h>
#include <stdlib.h>

/**
 * main- Multiplies two arguments passed to program.
 * @argc:argument count.
 * @argv:argument vector.
 *
 * Return: Alway 0.
 */
int main(int argc, char *argv[])
{
	int num, num1, mul;

	if (argc == 3)
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);

		mul = num * num1;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
