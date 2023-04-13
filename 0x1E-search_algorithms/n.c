#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t lf = 0;
	size_t ryt = size - 1;

	if (array == NULL)
		return (-1);

	while (lf <= ryt)
	{
		printf("Searching in array: ");
		for (mid = lf; mid < ryt; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = lf + (ryt - lf) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			ryt = mid - 1;
		else
			lf = mid + 1;
	}
	return (-1);
}
