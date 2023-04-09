#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins needed to make change
 *        for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coins += amount / 25;

	amount %= 25;
	coins += amount / 10;
	amount %= 10;

	coins += amount / 5;
	amount %= 5;

	coins += amount / 2;
	amount %= 2;
	printf("%d\n", coins);
	return (0);
}

