#include "main.h"

/**
 *_abs - function to print an absolute value
 *
 *@a: parameter to b e checked
 *
 *Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
