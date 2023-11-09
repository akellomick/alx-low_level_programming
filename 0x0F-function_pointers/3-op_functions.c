#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -  adds a and b.
 * @a: num1
 * @b: num2
 *
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtacts b from a.
 * @a: num1
 * @b: num2
 *
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies a and b.
 * @a: num1
 * @b: num2
 *
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divides a by b.
 * @a: num1.
 * @b: num2.
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- module a and b.
 * @a: num1
 * @b: num2
 *
 * Return: a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
