#include "main.h"
/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to concatenate
 *
 * Return: If memory allocation fails, NULL.
 *Otherwise, return a pointer to the newly-allocated space in memory
 *containing s1, followed by the first n bytes of s2, and null-terminated.
 *
 * Description: If NULL is passed, treat it as an empty string.
 *              If n is greater or equal to the length of s2,
 *              then use the entire string s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i); i++)
		*(concat + j++) = *(s1 + i);
	for (i = 0; i < n; i++)
		*(concat + j++) = *(s2 + i);
	*(concat + j) = '\0';

	return (concat);
}
