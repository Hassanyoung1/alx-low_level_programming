#include "main.h"
/**
 *_memset - fill memory with a constant byte
 *@s: declared string
 *@b: as char
 *@n: as int
 *Return: Always (0)
 */



char *_memset(char *s, char b, unsigned int n)
{	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
