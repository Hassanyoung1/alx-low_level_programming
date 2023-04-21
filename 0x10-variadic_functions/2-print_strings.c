#include "variadic_functions.h"

/**
 *print_strings - function that prints strings
 *@separator: string to be printed between numbers
 *@n: number of strings passed to the function
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	putchar('\n');
}
