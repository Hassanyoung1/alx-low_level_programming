#include "main.h"

/**
 *print_triangle - prints a triangle of '#' characters
 *@size: the size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}





