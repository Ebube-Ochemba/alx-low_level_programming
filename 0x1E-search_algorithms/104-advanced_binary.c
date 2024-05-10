#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);
int adv_bin_recursive(int *array, size_t left, size_t right, int value);


/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the Advanced Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || !size || !value)
        return (-1);

    return (adv_bin_recursive(array, 0, size - 1, value));
}


/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @start: The starting index of the array to print.
 * @end: The ending index of the array to print.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t idx;

    printf("Searching in array: ");
    for (idx = start; idx <= end; idx++)
    {
        printf("%d", array[idx]);
        if (idx < end)
            printf(", ");
    }
    printf("\n");
}

/**
 * adv_bin_recursive - Recursive function to search for a value
 *                     in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @left: The left bound of the subarray.
 * @right: The right bound of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int adv_bin_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return (-1);

    mid = left + (right - left) / 2;
    print_array(array, left, right);

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return (mid);
        return (adv_bin_recursive(array, left, mid, value));
    }

    if (array[mid] < value)
        return (adv_bin_recursive(array, mid + 1, right, value));
    return (adv_bin_recursive(array, left, mid - 1, value));
}
