#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes a string using rot13
 *@str: string as parameter
 *Return: alwyas result
 */

char *rot13(char *str)
{
	char *result = str;
	int i;
	int j;
	char *alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alph[j])
			{
				result[i] = rot13[j];
				break;
			}

		}
	}
	return (result);
}
