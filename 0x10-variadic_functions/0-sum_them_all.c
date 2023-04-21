#include "variadic_functions.h"

/**
 * sum_them_all - sums all given numbers using variadic function
 *
 * @n: number of parameters passed
 * Return: sum of all the passed numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_lis;

	if (n == 0)
		return (0);
	va_start(arg_lis, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_lis, int);
	}
	va_end(arg_lis);

	return (sum);
}
