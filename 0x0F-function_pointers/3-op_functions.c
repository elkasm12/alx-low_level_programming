#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - add function
 * @a: first parameter
 * @b: second parameter
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract function
 * @a: first parameter
 * @b: second parameter
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multipl function
 * @a: first parameter
 * @b: second parameter
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div function
 * @a: first parameter
 * @b: second parameter
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo function
 * @a: first parameter
 * @b: second parameter
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
