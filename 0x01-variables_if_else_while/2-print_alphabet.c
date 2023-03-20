#include <stdio.h>
/**
 *main - Print the alphabet in lowercase
 *Return: Always 0
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
