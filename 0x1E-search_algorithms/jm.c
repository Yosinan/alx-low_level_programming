#include<stdio.h>
#include<math.h>
int min(int a, int b){
    if(b>a)
      return a;
      else
      return b;
}
int jumpsearch(int arr[], int n, int x)
{
      // Finding block size to be jumped
    int step = 3;

    // Finding the block where element is
    // present (if it is present)
    int prev;
    while (arr[min(step, n)-1] < x)
    {
	printf("value checked [%d] = [%d]\n", step, arr[step]);
        prev = step;
        step += 3;
        if (prev >= n)
            return -1;
    }
    printf("Found b/n [%d] and [%d]\n", prev, step);
    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < x)
    {
        prev++;
	printf("value checked [%d] = [%d]\n", prev, arr[prev]);
        // If we reached next block or end of
        // array, element is not present.
        if (prev == min(step, n))
            return -1;
    }
    printf("value checked [%d] = [%d]\n", prev, arr[prev]);
    // If element is found
    if (arr[prev] == x)
        return prev;
  
    return -1;
}
int main()
{
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
    /*printf("Found %d at index: %d\n\n", 6, jumpsearch(arr, n, 6));*/
    printf("Found %d at index: %d\n\n", 1, jumpsearch(arr, n, 1));
    printf("Found %d at index: %d\n", 999, jumpsearch(arr, n, 999));
    return (0);
}
