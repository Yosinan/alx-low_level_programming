#include "search_algos.h"

/**
 *a function that searches for a value in an array of integers using the Linear search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 *@value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{

	if (array != NULL) {
		size_t idx;

		for (idx = 0; idx < size; idx ++) 
		{
			
			printf("Value checked array[%d] = [%d]", idx, array[idx]);
			
			if (value == array[idx]

					return (idx);
			


		
	        }

}
	else
		return (-1);
}
