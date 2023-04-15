#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int jump(int arr[], int n, int x);
int jump(int arr[], int n, int x) {
    int step = sqrt(n);
    int prev = 0;
    while (arr[step-1] < x) {
        printf("value checked array[%d] = [%d]\n", step, arr[step]);
	prev = step;
        step += step;
        if (prev >= n) {
            return -1;
        }
    }
    printf("b/n [%d] = [%d]\n", prev, step);
    while (arr[prev] < x) {
        prev++;
        if (prev == step) {
            return -1;
        }
    }
    if (arr[prev] == x) {
        return prev;
    }
    return -1;
}


int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump(array, size, 999));
    return (EXIT_SUCCESS);
}
