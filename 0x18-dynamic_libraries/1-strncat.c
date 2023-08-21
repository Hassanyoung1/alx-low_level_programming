#include <stdio.h>
/**
 *_strncat - concatenates two strings.
 *@dest: destination
 *@src: sting
 *@n: for thte number
 *Return: Always return diest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n && i < srclen;  i++)
		dest[destlen + i] = src[i];
	return (dest);
}
