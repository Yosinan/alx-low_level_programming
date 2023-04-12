#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value){
	if (array != NULL) {
		int idx = 0;
		for (idx; idx < size; idx ++) {
			if ( value != array[idx] ) {
				printf("Value checked array[%d] = [%d]", idx, array[idx]);
			}
			else if (value == array[idx] ) {
				return (idx);
			}
			else 
				printf("Value is not in the array");


		
	}

}
	else
		return (-1);
}
