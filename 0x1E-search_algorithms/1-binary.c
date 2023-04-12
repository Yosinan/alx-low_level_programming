#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If value is not present in array or if array is NULL, -1.
 * 	otherwise, the index at which the value was found.
 */

int recurr_fun(int *arr, size_t lf, size_t ryt, int val);

int binary_search(int *array, size_t size, int value) 
{

	if (array == NULL)
		return (-1);

	return (recurr_fun(array, 0, size - 1, value));
}

int recurr_fun(int *arr, size_t lf, size_t ryt, int val)
{
	size_t i;
	while (lf <= ryt) 
	{
		printf("Searching in array: ");
		for (i = lf; i < ryt; i++) 
		
			printf("%d, ", array[i]);
		printf("%d\n", arr[i]);

		i = (lf + ryt) / 2;

		if (arr[i] == val) 
			return (i);

		if (arr[i] < val)
			lf = i + 1;
		else
			ryt = i - 1;
	}
		
	return (-1);
}
