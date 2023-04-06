#include "main.h"

/**
 * _is_palindrome - checks if a given string is a palindrome recursively
 * @s: string to check
 * @start: starting index of the string
 * @end: ending index of the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int _is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	return (_is_palindrome(s, 0, len - 1));
}
