#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[len] = '\0';
	return (copy);
}
