#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: pointer to the 1st element of the array
 * @size: no of elements in array
 * @value: the no to search for
 *
 * Return: 1st index w/r value is found,
 * if array is null/ value is not present in arrray,
 * it must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t prob;
	int bot = 0;
	int top = size - 1;

	if (array == NULL)
		return (-1);

	while (value <= array[top] && bot <= top && value >= array[bot])
	{
		if (bot == top)
		{
			if (array[bot] == value)
				return (bot);
			return (-1);
		}
		prob = (((double)(top - bot) * (value - array[bot])) /
				(array[top] - array[bot])) + bot;
		if (prob < size)
			printf("Value checked array[%ld] = [%d]\n", prob, array[prob]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", prob);
			break;
		}
		if (array[prob] == value)
			return (prob);
		if (array[prob] < value)
			bot = prob + 1;
		else
			top = prob - 1;
	}
	return (-1);
}
