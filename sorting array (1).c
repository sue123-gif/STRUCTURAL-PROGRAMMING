#include <stdio.h>

// Function to sort array in ascending order
void sortArray(int arr[], int size) {
    int i, j, mark;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                mark = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = mark;
            }
        }
    }
}

// Function to insert elements into array
int insertArray(int arr[], int size, int element) {
    arr[size] = element;
    return size + 1;
}

// Function to delete elements from array
int deleteArray(int arr[], int size, int index) {
    int i;
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int main() {
    int arr[6] = {5, 2, 9, 1, 7};
    int size = 6;

    printf("Initial array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort initial array
    sortArray(arr, size);
    printf("Array after sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert new array
    int insertedArray[] = {3};
    int insertedSize = sizeof(insertedArray) / sizeof(insertedArray[0]);
    for (int i = 0; i < insertedSize; i++) {
        size = insertArray(arr, size, insertedArray[i]);
    }

    printf("Array after insertion:\n");
    sortArray(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete inserted array
    int indexToDelete = size - insertedSize;
    for (int i = 0; i < insertedSize; i++) {
        size = deleteArray(arr, size, indexToDelete);
    }

    printf("Final array after deletion:\n");
    sortArray(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
