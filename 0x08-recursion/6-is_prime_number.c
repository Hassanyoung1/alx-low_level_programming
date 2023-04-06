#include "main.h"

/**
 * _is_prime_number - checks if the given number is prime recursively
 * @n: number to check
 * @i: divisor to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int _is_prime_number(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_number(n, i + 1));
}

/**
 * is_prime_number - checks if the given number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (_is_prime_number(n, 2));
}
