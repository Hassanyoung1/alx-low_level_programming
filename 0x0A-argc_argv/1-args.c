#include <stdio.h>
/**
 *main - prints the number of arguments passed into it.
 *
 *@argc: the parameter
 *@argv: the second para
 *Return: Always 0
 */


int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", --argc);
	return (0);
}
