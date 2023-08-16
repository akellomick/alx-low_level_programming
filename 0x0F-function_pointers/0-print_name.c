#include "function_pointers.h"

/**
 * print_name - prints name.
 * @name: pointer to name.
 * @f: function pointer to actual function that prints name.
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
