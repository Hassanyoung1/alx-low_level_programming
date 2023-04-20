#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	a = 0;
	while (a < n)
	{
		sum += va_arg(args, int);
		a++;
	}
	va_end(args);
	return (sum);
}
