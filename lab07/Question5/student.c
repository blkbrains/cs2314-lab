/*
Question 5: Selection Sort

Description:
Implement selection sort for an integer array.

Selection sort repeatedly finds the smallest element from the unsorted
portion of the array and swaps it with the first element of the unsorted
portion.

The function should sort the array in ascending order.

Example:
Input:  [5, 1, 4, 2, 8]
Output: [1, 2, 4, 5, 8]

Notes:
- If the array is empty or has only one element, do nothing.
- You may write a helper function such as swap(...) if you want.
- Do not use any built-in sorting function.
*/

int smallest(int arr[], int k, int n){
    int pos=k, small=arr[k], i;
    for(i=k+1; i<n;i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

void selectionSort(int arr[], int size) {
    // TODO: implement selection sort
    //(void)arr;
   // (void)size;
int k, pos, temp;
for(k=0;k<size;k++)
{
    pos=smallest(arr,k,size);
    temp=arr[k];
    arr[k]=arr[pos];
    arr[pos]=temp;
}

}

