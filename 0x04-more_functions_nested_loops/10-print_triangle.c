#include "main.h"

/**
 *print_triangle- function to print a triangle with #
 *@size: triangle size
 *Return: Always 0
 */



void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
