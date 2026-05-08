#include <stdbool.h>

/*
Question 1: Bubble Sort

Description:
Implement two versions of bubble sort for an integer array.

1. bubbleSort:
   Implement the basic bubble sort algorithm.
   Repeatedly compare adjacent elements and swap them if they are
   in the wrong order. After each pass, the largest unsorted element
   should move to its correct position.

2. bubbleSortOptimized:
   Implement an improved version of bubble sort.
   This version should stop early if a full pass completes without
   any swaps, which means the array is already sorted.

Both functions should sort the array in ascending order.

Example:
Input:  [5, 1, 4, 2, 8]
Output: [1, 2, 4, 5, 8]

Notes:
- If the array is empty or has only one element, do nothing.
- You may write a helper function such as swap(...) if you want.
*/

void bubbleSort(int arr[], int size) {
    // TODO: implement basic bubble sort
    //(void)arr;
    //(void)size;

    int i,temp,j;

    for (i=0; i<size; i++)
    {
      for (j= 0; j< size-i-1; j++)
      {
         if (arr[j]>arr[j+1])
         {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
    }
}

void bubbleSortOptimized(int arr[], int size) {
    int i, j, temp, flag;

    for (i = 0; i < size; i++)
    {
        flag = 0;  
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                flag = 1;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (flag == 0)
        { return; }
    }
}

