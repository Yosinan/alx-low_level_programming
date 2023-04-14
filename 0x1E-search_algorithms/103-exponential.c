#include "search_algos.h"

/**
  * binary_Search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @lf: min index
  * @ryt:upper bound of the index
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_Search(int *array, size_t lf, size_t ryt, int value)
{
	size_t mid;

	while (lf <= ryt)
	{
		printf("Searching in array: ");
		for (mid = lf; mid < ryt; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (lf + ryt) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			ryt = mid - 1;
		else
			lf = mid + 1;
	}
	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                 of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t min, ex;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	for (ex = 1; ex < size && array[ex] <= value; ex *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", ex, array[ex]);
	}
	min = (ex < size ? ex : size) - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", ex / 2, min);
	return (binary_Search(array, ex / 2, min, value));
}
