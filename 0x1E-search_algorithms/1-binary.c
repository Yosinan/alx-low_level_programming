#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
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
	while (lf <= ryt) 
	{
		printf("Searching in array: ");
		for (int i = lf; i <= ryt; i++ ) 
		{
			printf("%d", array[i]);
			if (i != end) {
				printf(", ");
			else
				printf("\n");
		}

		mid = (lf + ryt) / 2;

		if (array[mid] == value) 
			return (mid);

		if (array[mid] < value )
			lf = mid + 1;
		else
			ryt = mid - 1;
	}
		
	return (-1);
}
