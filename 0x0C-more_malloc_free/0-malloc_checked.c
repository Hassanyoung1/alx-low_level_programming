#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: Size of the memory block to allocate.
 *
 * Return: Pointer to the allocated memory block.
 *         If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
	{
		exit(98);
	}
	return (mal);
}
