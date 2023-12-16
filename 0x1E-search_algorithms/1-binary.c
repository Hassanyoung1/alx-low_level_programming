#include "search_algos.h"

/**
 * binary_search - searches an array using binary search
 *
 * @array: The array to search
 * @size: size of the array
 * @value: The value to look for
 * Return: Index where value is found on success, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, high, low;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array_prompt(&array[low], high - low + 1);

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array_prompt - Prints value of array being searched
 *
 * @array: The array with values to print
 * @size: size of the array
 */
void print_array_prompt(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
}
