#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: a pointer to the first element of the array to search.
  * @size: the number of elements in the array.
  * @value: the value to search for.
  *
  * Return: if the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * 
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
			printf("%d, ", arr[i]);
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
