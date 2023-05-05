#include "main.h"

/**
 * get_endianness - checks if a machine is small or big`
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);

}
