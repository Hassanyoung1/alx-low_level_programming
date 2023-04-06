#include "main.h"
/**
 * _sqrt_check - checks if the given number has a natural square root
 * @n: number to check
 * @i: the possible square root of n
 *
 * Return: the natural square root of n if it exists, otherwise -1
 */
int _sqrt_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of @n, or -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(n, 0));
}
