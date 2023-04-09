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

	coins += amount / 25; /* Number of quarters */
	amount %= 25;         /* Remainder after quarters */

	coins += amount / 10; /* Number of dimes */
	amount %= 10;         /* Remainder after dimes */

	coins += amount / 5;  /* Number of nickels */
	amount %= 5;          /* Remainder after nickels */

	coins += amount / 2;  /* Number of pennies (2 cents) */
	amount %= 2;          /* Remainder after pennies */

	coins += amount;      /* Any remaining pennies (1 cent) */

	printf("%d\n", coins);

	return (0);
}

