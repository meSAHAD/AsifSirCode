/*
given a list of integers, determine the number of comparisons used by
- bubble sort
- insertion sort
*/
#include <stdio.h>

// Function to perform Bubble Sort and count comparisons
int bubbleSort(int arr[], int n)
{
    int comparisons = 0;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return comparisons;
}

// Function to perform Insertion Sort and count comparisons
int insertionSort(int arr[], int n)
{
    int comparisons = 0;
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return comparisons;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], arr2[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

        //copying the array into the second array for other calculation
    for (int i = 0; i < n; i++)
        arr2[i] = arr[i];

    // Calculate comparisons for Bubble Sort
    int bubbleComparisons = bubbleSort(arr, n);

    // Calculate comparisons for Insertion Sort
    int insertionComparisons = insertionSort(arr2, n);

    printf("Bubble Sort Comparisons: %d\n", bubbleComparisons);
    printf("Insertion Sort Comparisons: %d\n", insertionComparisons);

    return 0;
}
