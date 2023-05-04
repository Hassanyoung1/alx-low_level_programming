#include "main.h"

/**
 *print_binary -  prnt binary equivalent of a decimal num
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	int a = 63;
	int num  = 0;
	unsigned long int present;

	for ( ; a >= 0; a--)
	{
		present = n >> a;
		
		if (present & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		{
			_putchar('0');
		}
		a++;
	}
	if (!num)
	{
		_putchar('0');
	}
}
