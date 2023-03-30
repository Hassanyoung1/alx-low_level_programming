#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input value
 * @src: input value
 * @n: maximum number of characters to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
