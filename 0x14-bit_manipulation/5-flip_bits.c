#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63;
	int num = 0;
	unsigned long int present;
	unsigned long int exc = n ^ m;

	for ( ; a >= 0; a--)
	{
		present = exc  >> a;
		if (present & 1)
		{
			num++;
		}
	}

	return (num);
}
