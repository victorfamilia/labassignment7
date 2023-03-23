#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 

//for each iteration, count the number of swaps for that iteration,
//use malloc, declare array with the appropriate size, add numbers
//to it, call bubble sort function.
 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
//function to implement bubble sort
void bubbleSort(int arr[], int n)
{
  int i, j, numSwap;
  for (i = 0; i < n - 1; i++)
  {
    numSwap = 0;
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
        numSwap++;
      }
    }
    printf("Index #%d: %d\n", i+1, numSwap);
  }
}

//function to prints array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//tests above functions
int main()
{
    int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}