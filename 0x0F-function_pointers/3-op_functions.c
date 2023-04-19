#include "3-calc.h"

/**
 * op_add - Adds two numbers
 *
 * @a: first number to add
 * @b: second number
 * Return: Result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 *
 * @a: first number to sub
 * @b: second number
 * Return: Result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 *
 * @a: first number
 * @b: second number
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides between 2 numbers
 *
 * @a: number to divide with
 * @b: number to divide by
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performes modulo oppr. between 2 numbers
 *
 * @a: number to find modulo of
 * @b: number to find modulo with
 * Return: result of modulo operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
