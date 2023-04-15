#include "search_algos.h"

/**
  * advanced_binary - Searches for a value in a sorted array
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
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (adv_bin(array, 0, size - 1, value));
}
/**
  * adv_bin - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @lf: The first index
  * @ryt: the last index
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the sub-array being searched after each change.
  */
int adv_bin(int *array, size_t lf, size_t ryt, int value)
{
	size_t mid;

	if (lf <= ryt)
	{
		printf("Searching in array: ");
		for (mid = lf; mid < ryt; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = lf + (ryt - lf) / 2;
		if (array[mid] == value && (mid == lf || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (adv_bin(array, lf, mid - 1, value));
		else
			return (adv_bin(array, mid + 1, ryt, value));
	}
	return (-1);
	}
