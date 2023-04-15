#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: the value to search for.
  *
  * Return: if the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, jump = 0;
	size_t step;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
		/*
		 * if (jump >= size)
		 * return (-1);
		 */
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

	jump = jump < size - 1 ? jump : size - 1;

	while (prev < jump && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	/**
	 * if (array[prev] == value)
	 * {
	 * return (prev);
	 * }
	 * return (-1);
	 */
	return (array[prev] == value ? (int)prev : -1);
}
