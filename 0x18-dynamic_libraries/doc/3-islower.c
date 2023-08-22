#include "main.h"

/**
 * _islower - function  checking lower cases
 *@c: parameter to be printed
 *Return: 1 if its lower case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
