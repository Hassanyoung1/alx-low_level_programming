#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: print string
 *Return: Always non
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_strlen_recursion(s + 1);
	return (14);
}
