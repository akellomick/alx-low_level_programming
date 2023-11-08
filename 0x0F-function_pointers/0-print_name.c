#include "function_pointers.h"

/**
 * print_name - use function pointer as argument to print name.
 * @name: pointer to name printed.
 * @f: points to functions that print name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
