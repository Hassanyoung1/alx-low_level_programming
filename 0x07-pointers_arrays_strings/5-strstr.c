#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located
 *substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;

	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			char *p3 = p1;

			while (*p2 != '\0' && *p3 == *p2)
			{
				p3++;
				p2++;
			}
			if (*p2 == '\0')
			{
				return (p1);
			}
			else
			{
				p2 = needle;
			}
		}
		p1++;
	}
	return (NULL);
}
