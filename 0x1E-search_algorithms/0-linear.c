#include "search_algos.h"

/**
 * linear_search - searches an array using linear search
 *
 * @array: The array to search
 * @value: Value to be saerched
 * @size: size of the array
 * Return: Index where value is found, -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("The array compared [%d]\n", array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
