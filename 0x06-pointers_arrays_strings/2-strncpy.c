#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for (; i <= n; i++)
		dest[i] = '\0';
	return (dest);
}
