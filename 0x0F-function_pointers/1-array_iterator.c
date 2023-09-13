#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                   on each element of an array.
 * @array: The array to be passed to the function.
 * @size: The size of the array.
 * @action: A pointer to the function you need to use.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || action == NULL)
		return;

	for (idx = 0; idx < size; idx++) /* iterate array index */
	{
		action(array[idx]);
	}
}
