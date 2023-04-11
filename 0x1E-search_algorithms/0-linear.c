#include "search_algos.h"

int linear_search(int *array, size_t size, int value){
	if (array != NULL) {
		for (int idx = 0; idx < size; idx++) {
			if ( value != array[idx] ) {
				puts("Value checked array[%lu] = [%d]", idx, array[idx]);
			}
			else if (value == array[idx] ) {
				return (idx);
			}
			else 
				puts("Value is not in the array");


		
	}
}
	else
		return (-1);
		}
