#include "search_algos.h"

/**
 * linear_search - searches in array for value using linear search.
 *
 * @array: pointer to the frist element of the array
 * @size: number of the array elements
 * @value: value to search for
 *
 * Return: index where value is found,
 * If value is not present in array or
 * if array is NULL, the function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
