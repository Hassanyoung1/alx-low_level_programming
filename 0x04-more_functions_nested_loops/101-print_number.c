#include "main.h"
/**
 *print_number- print an integer
 *@n: as the int
 *Return: Always 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

