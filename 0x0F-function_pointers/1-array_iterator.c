#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as
 *a parameter on each element of an array
 * @array: The array to iterate through
 * @size: The size of the array
 * @action: A pointer to the function to execute on each array element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
