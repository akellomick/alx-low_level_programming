#include "3-calc.h"

/**
 * get_op_func- choices on arithmetic sign.
 * @s: arithmetic sign.
 *
 * Return: option for computing.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int x = 0;

	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;

	return (ops[x].f);
}
