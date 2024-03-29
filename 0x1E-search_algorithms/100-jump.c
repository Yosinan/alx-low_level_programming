#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: pointer to the first element of the array to search.
  * @size: the number of elements in the array.
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

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; prev < jump && array[prev] < value; prev++)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);
	return (-1);
}
