#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of calculations
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: NOthing
 */
int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	sign = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' && num2 == 0) || (*sign == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(sign)(num1, num2));
	return (0);
}
