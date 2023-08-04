#include <stdio.h>

/**
 * main - Program's entry point.
 * @argc: num of arguments in argv[]
 * @argv: arguments passed to program.
 *
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int x = 0;

	for (x = 0; x < argc; x++)
	{
		printf("%s", argv[0]);
	}
	printf("\n");

	return (0);
}
