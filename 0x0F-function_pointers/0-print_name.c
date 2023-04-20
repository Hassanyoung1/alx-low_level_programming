#include "function_pointers.h"

/**
 * print_name - prints a name using function pointers
 *
 * @name: Name to be printed
 * @f: pointer to printing function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
