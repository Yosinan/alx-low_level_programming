#include "search_algos.h"

int recurr_fun(int *arr, size_t lf, size_t ryt, int val);

int binary_search(int *array, size_t size, int value) 
{

	if (array == NULL)
		return (-1);

	return (recurr_fun(array, 0, size - 1, value));
}

int recurr_fun(int *arr, size_t lf, size_t ryt, int val)
{
	size_t 
