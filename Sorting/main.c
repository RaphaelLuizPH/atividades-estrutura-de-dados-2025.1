#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray(int arr[], int size) {


    for (int i = 0; i < size; i++) {
        printf(" %d, ", arr[i]);
    }
}


void BubbleSort(int arr[]) {


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
}

void selectionSort(int arr[]) {




    for (int i = 0; i < SIZE; i++) {
        int elected = i;

        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[elected]) {
                elected = j;
            }


        }

        int temp = arr[elected];
        arr[elected] = arr[i];
        arr[i] = temp;
    }
}



void insertionSort(int arr[]) {


    for (int i = 1; i < SIZE; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;

        }

        arr[j + 1] = key;

    }
}


// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1); // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    // Place the pivot element in its correct position
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the partition index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after the partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}




int main(void)
{




    int array[] = {13,4,651,279,5423,74967,43,76,397,176,31,62,742,675,9,67,956,7695,8,39,143,712,97,2,965,7,46,27694,759,12,7,19,7,8564,654,127,1,59,87,25,1,165,7,8,67,2, 461,473,9567,697,967,352,96,56795,9,74,67,691,79};

    int size = sizeof(array) / sizeof(array[0]);

    time_t start = clock();
    //BubbleSort(array);
   // selectionSort(array);
   // insertionSort(array);
    quickSort(array, 0, size - 1);

    time_t end = clock();
    printArray(array, size);

    printf(" \n \n Time elapsed: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
