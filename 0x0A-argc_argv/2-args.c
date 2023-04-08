#include <stdio.h>
/**
 *main - prints all arguments it receives.
 *@argc: print arguments
 *@argv: print second argument
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
