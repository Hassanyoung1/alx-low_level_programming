#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to accept
 *
 * Return: the number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			return (i);
		}
	}
	return (i);
}
