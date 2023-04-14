#include "main.h"
/**
 * string_nconcat - Concatenates two strings, up to n bytes from s2.
 *
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the new concatenated string.
 *         NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	concat_str = malloc((s1_len + n) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		concat_str[i] = s1[i];
		for (j = 0; j < n; j++, i++)
		{
			concat_str[i] = s2[j];
		}
		concat_str[i] = '\0';
	}
	return (concat_str);
}
